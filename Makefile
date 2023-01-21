# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 14:20:39 by yrhiba            #+#    #+#              #
#    Updated: 2023/01/21 01:27:29 by yrhiba           ###   ########.fr        #
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

SRCS =	algorithms/longest_incresing_sub.c \
		parse/check_argv.c \
		parse/staks_init.c \
		data_utils/data_dup.c \
		data_utils/data_lis_init.c \
		data_utils/data_in_sub_init.c \
		set_funcs/set_tar_pos.c \
		set_funcs/set_prev_data.c \
		set_funcs/set_lis.c \
		set_funcs/set_in_sub.c \
		operations_utils/swap.c \
		operations_utils/push.c \
		operations_utils/rotate.c \
		operations_utils/reverse_rotate.c \
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
		utils/is_sorted.c \
		utils/get_max_lsi.c \
		debug/print_ab.c \
		debug/print_lsi.c \
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
