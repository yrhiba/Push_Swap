# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 14:20:39 by yrhiba            #+#    #+#              #
#    Updated: 2023/01/12 09:37:43 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

COMPILER = cc

OBJFLAGS = -Wall -Wextra -Werror

SRCS =	push_swap.c \
		parse/check_argv.c \
		parse/staks_init.c \
		utils/is_sorted.c \
		utils/swap.c \
		utils/push.c \
		utils/rotate.c \
		utils/reverse_rotate.c \
		operations/sa.c \
		operations/sb.c \
		operations/pa.c \
		operations/pb.c \
		debug/print_ab.c \
		clear/ps_clear.c

INCS = libft/libft.h libmylist/my_list.h

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.c=.o))

$(NAME) : $(OBJS) make_libft make_libmylist
	$(COMPILER) $(OBJS) -L libft -l ft -L libmylist -l mylist -o $(NAME)

all : $(NAME)

$(ODIR)%.o : %.c $(INCS)
	@mkdir -p $(dir $@)
	$(COMPILER) $(OBJFLAGS) -I . -I libft -I libmylist -c $< -o $@

clean : clean_libft clean_libmylist
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

make_libft :
	make all -C libft

clean_libft :
	make fclean -C libft

make_libmylist :
	make all -C libmylist

clean_libmylist :
	make fclean -C libmylist

.PHONEY : all fclean clean re make_libft clean_libft make_libmylist clean_libmylist
