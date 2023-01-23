/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:37:29 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 01:34:00 by yrhiba           ###   ########.fr       */
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
	int				cost_pa;
	int				cost_pb;
	int				cost_tp;
	int				lis;
	int				to_up;
	struct s_data	*prev;

}					t_data;

// algorithms
void				longest_incresing_sub(t_push_swap *stacks);

// parse functions
int					staks_init(t_push_swap **staks);
int					check_argv(int ac, char **av, t_push_swap *stacks);

// utils functions
int					is_sorted(t_my_list *it, int order);
int					min_int(int a, int b);

// data utils
t_data				*data_dup(int data, int cur_pos);
void				data_lis_init(t_push_swap *stacks);
void				data_in_sub_init(t_push_swap *stacks);

// set functions
void				set_tar_pos(t_push_swap *staks);
void				set_prev_data(t_push_swap *stacks);
void				set_lis(t_push_swap *stacks);
void				set_in_sub(t_push_swap *stacks, int lis);
void				set_cur_pos(t_push_swap *stacks);

// get functions
t_data				*get_min_cost_pb_in_sub(t_push_swap *stacks);
int					get_max_lsi(t_my_list *it);
t_data				*get_max_data(t_my_list *stack);
t_data				*get_min_data(t_my_list *stack);
t_data				*get_to_data(t_push_swap *stacks, t_data *data);
t_data				*get_min_cost_pa(t_push_swap *stacks);

// calc functions
void				calc_cost_pa(t_push_swap *stacks);
void				calc_cost_pb(t_push_swap *stacks);
void				calc_cost_tp(t_push_swap *stacks);
int					calc_size_not_in_sub(t_my_list *stack);

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

// sort floors
void				init_floor(t_push_swap *stacks);
void				floor_one(t_push_swap *stacks);
void				floor_two(t_push_swap *stacks);
void				end_floor(t_push_swap *stacks);

// debug functions
void				print_ab(t_push_swap *staks);
void				print_lsi(t_push_swap *stacks);
void				print_statu(t_push_swap *stacks);

// clear functions
void				ps_clear(t_push_swap *staks);

#endif
