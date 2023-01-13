# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 14:20:39 by yrhiba            #+#    #+#              #
#    Updated: 2023/01/13 12:51:06 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS_NAME = checker

COMPILER = cc

OBJFLAGS = -Wall -Wextra -Werror

PSRC = push_swap.c
BSRC = checker.c

OBJPSRC = $(addprefix $(ODIR), $(PSRC:.c=.o))
OBJBSRC = $(addprefix $(ODIR), $(BSRC:.c=.o))

SRCS =	parse/check_argv.c \
		parse/staks_init.c \
		utils/is_sorted.c \
		utils/swap.c \
		utils/push.c \
		utils/rotate.c \
		utils/reverse_rotate.c \
		operations/sa.c \
		operations/sb.c \
		operations/ss.c \
		operations/pa.c \
		operations/pb.c \
		operations/ra.c \
		operations/rb.c \
		operations/rr.c \
		operations/rra.c \
		operations/rrb.c \
		operations/rrr.c \
		debug/print_ab.c \
		clear/ps_clear.c

INCS = libft/libft.h libmylist/my_list.h

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.c=.o))

$(NAME) : $(OBJS) $(OBJPSRC)
	make all -C libft
	make all -C libmylist
	$(COMPILER) $(OBJS) $(OBJPSRC) -L libft -l ft -L libmylist -l mylist -o $(NAME)

all : $(NAME)

$(ODIR)%.o : %.c $(INCS)
	@mkdir -p $(dir $@)
	$(COMPILER) $(OBJFLAGS) -I . -I libft -I libmylist -c $< -o $@

clean : clean_libft clean_libmylist
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME) $(BONUS_NAME)

re : fclean all

$(BONUS_NAME) : $(OBJS) $(OBJBSRC)
	make all -C libft
	make all -C libmylist
	$(COMPILER) $(OBJS) $(OBJBSRC) -L libft -l ft -L libmylist -l mylist -o $(BONUS_NAME)

bonus : $(BONUS_NAME)

clean_libft :
	make fclean -C libft

clean_libmylist :
	make fclean -C libmylist

.PHONEY : all fclean clean re make_libft clean_libft make_libmylist clean_libmylist
