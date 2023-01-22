/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:07:33 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 02:00:02 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	min_to_up(t_push_swap *stacks, t_data *min)
{
	int	f;

	f = (min->cur_pos > stacks->size_a / 2);
	while (min->cost_pb)
	{
		if (f)
		{
			rra(stacks);
			ft_printf("rra\n");
		}
		else
		{
			ra(stacks);
			ft_printf("ra\n");
		}
		min->cost_pb--;
	}
	pb(stacks);
	ft_printf("pb\n");
}

void	floor_one(t_push_swap *stacks)
{
	int	i;
	int	size;

	size = calc_size_not_in_sub(stacks);
	i = 0;
	while (i < size)
	{
		min_to_up(stacks, get_min_cost_pb_in_sub(stacks));
		set_cur_pos(stacks);
		calc_cost_pb(stacks);
		i++;
	}
}
