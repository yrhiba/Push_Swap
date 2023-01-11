/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:29 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 22:03:32 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "my_list.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define DECORDER 0
# define INCORDER 1

typedef struct s_push_swap
{
	t_my_list	*stack_a;
	long long	size_a;
	t_my_list	*stack_b;
	long long	size_b;

}				t_push_swap;

// parse functions
int				staks_init(t_push_swap **staks);
int				check_argv(int ac, char **av, t_push_swap *stacks);

// utils functions
int				stack_sorted(t_my_list *it_stack, int order);
int				swap(t_my_list **stack);
int				push(t_my_list **to, t_my_list **from);
int				rotate(t_my_list **stack);

// operations functions

// debug functions
void			print_ab(t_push_swap *staks);

// clear functions
void			ps_clear(t_push_swap *staks);

#endif
