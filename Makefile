# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 14:20:39 by yrhiba            #+#    #+#              #
#    Updated: 2023/01/19 02:13:46 by yrhiba           ###   ########.fr        #
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
		utils/ft_datadup.c \
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

clean :
	make fclean -C libft
	make fclean -C libmylist
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME) $(BONUS_NAME)

re : fclean all

$(BONUS_NAME) : $(OBJS) $(OBJBSRC)
	make all -C libft
	make all -C libmylist
	$(COMPILER) $(OBJS) $(OBJBSRC) -L libft -l ft -L libmylist -l mylist -o $(BONUS_NAME)

bonus : $(BONUS_NAME)

.PHONEY : all fclean clean re make_libft clean_libft make_libmylist clean_libmylist
