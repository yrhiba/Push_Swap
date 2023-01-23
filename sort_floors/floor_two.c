/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:00:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 02:25:13 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_m1(t_push_swap *stacks, t_data *min, t_data *to)
{
	int	i;

	i = 0;
	while (i < min_int(min->cost_tp, to->cost_pb))
	{
		rr(stacks);
		ft_printf("rr\n");
		i++;
	}
	while (i < to->cost_pb)
	{
		ra(stacks);
		ft_printf("ra\n");
		i++;
	}
	while (i < min->cost_tp)
	{
		rb(stacks);
		ft_printf("rb\n");
		i++;
	}
}

static void	rotate_m2(t_push_swap *stacks, t_data *min, t_data *to)
{
	int	i;

	i = 0;
	while (i < min_int(min->cost_tp, to->cost_pb))
	{
		rrr(stacks);
		ft_printf("rrr\n");
		i++;
	}
	while (i < to->cost_pb)
	{
		rra(stacks);
		ft_printf("rra\n");
		i++;
	}
	while (i < min->cost_tp)
	{
		rrb(stacks);
		ft_printf("rrb\n");
		i++;
	}
}

static void	rotate_m3(t_push_swap *stacks, t_data *min, t_data *to)
{
	int i;

	i = 0;
	while (i < min->cost_tp)
	{
		if (min->to_up)
		{
			rb(stacks);
			ft_printf("rb\n");
		}
		else
		{
			rrb(stacks);
			ft_printf("rrb\n");
		}
		i++;
	}
	i = 0;
	while (i < to->cost_pb)
	{
		if (to->to_up)
		{
			ra(stacks);
			ft_printf("ra\n");
		}
		else
		{
			rra(stacks);
			ft_printf("rra\n");
		}
		i++;
	}
}

static void	push_min_cost(t_push_swap *stacks)
{
	t_data	*min;
	t_data	*to;

	min = get_min_cost_pa(stacks);
	to = get_to_data(stacks, min);
	// print_ab(stacks);
	// ft_printf("%min : %-3d cost : %-3d up : %d \n", min->data, min->cost_tp, min->to_up);
	// ft_printf("%to  : %-3d cost : %-3d up : %d \n", to->data, to->cost_pb, to->to_up);
	if (min->to_up && to->to_up)
		rotate_m1(stacks, min, to);
	else if (!(min->to_up) && !(to->to_up))
		rotate_m2(stacks, min, to);
	else
		rotate_m3(stacks, min, to);
	pa(stacks);
	ft_printf("pa\n");
}

void	floor_two(t_push_swap *stacks)
{
	set_cur_pos(stacks);
	set_prev_data(stacks);
	calc_cost_pb(stacks);
	calc_cost_pa(stacks);
	calc_cost_tp(stacks);
	while (!my_list_empty(stacks->stack_b))
	{
		push_min_cost(stacks);
		set_cur_pos(stacks);
		set_prev_data(stacks);
		calc_cost_pb(stacks);
		calc_cost_pa(stacks);
		calc_cost_tp(stacks);
	}
}
