/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:29 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 00:36:02 by yrhiba           ###   ########.fr       */
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

# define SA "sa\n"
# define SB "sb\n"
# define SS "ss\n"
# define PA "pa\n"
# define PB "pb\n"
# define RA "ra\n"
# define RB "rb\n"
# define RR "rr\n"
# define RRA "rra\n"
# define RRB "rrb\n"
# define RRR "rrr\n"

typedef struct s_push_swap
{
	t_my_list		*stack_a;
	long long		size_a;

	t_my_list		*stack_b;
	long long		size_b;

	int				max;
	int				min;

}					t_push_swap;

typedef struct s_data
{
	int				data;
	int				in_sub;
	int				cur_pos;
	int				tar_pos;
	int				cost_a;
	int				cost_b;
	int				lis;
	struct s_data	*prev;

}					t_data;

// parse functions
int					staks_init(t_push_swap **staks);
int					check_argv(int ac, char **av, t_push_swap *stacks);

// utils functions
t_data				*ft_datadup(int data, int cur_pos);
int					is_sorted(t_my_list *it, int order);
void				set_tar_pos(t_push_swap *staks);
void				set_prev_data(t_my_list *stack);

// operations utils functions
int					swap(t_my_list **stack);
int					push(t_my_list **to, t_my_list **from);
int					rotate(t_my_list **stack);
int					reverse_rotate(t_my_list **stack);

// operations functions
void				sa(t_push_swap *stacks);
void				sb(t_push_swap *stacks);
void				ss(t_push_swap *stacks);
void				pa(t_push_swap *stacks);
void				pb(t_push_swap *stacks);
void				ra(t_push_swap *stacks);
void				rb(t_push_swap *stacks);
void				rr(t_push_swap *stacks);
void				rra(t_push_swap *stacks);
void				rrb(t_push_swap *stacks);
void				rrr(t_push_swap *stacks);

// debug functions
void				print_ab(t_push_swap *staks);

// clear functions
void				ps_clear(t_push_swap *staks);

#endif
