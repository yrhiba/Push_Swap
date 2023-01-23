/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_floor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:32:27 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 01:37:25 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_floor(t_push_swap *stacks)
{
	t_data	*min;
	int		i;

	set_cur_pos(stacks);
	calc_cost_pb(stacks);
	min = get_min_data(stacks->stack_a);
	i = 0;
	while (i < min->cost_pb)
	{
		if (min->to_up)
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
