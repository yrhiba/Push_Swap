/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost_pb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 01:52:15 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 00:23:46 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_cost_pb(t_push_swap *stacks)
{
	t_my_list	*it;

	it = stacks->stack_a;
	while (it)
	{
		if (((t_data *)(it->data))->cur_pos > (stacks->size_a / 2))
		{
			((t_data *)(it->data))->cost_pb = stacks->size_a
				- ((t_data *)(it->data))->cur_pos;
			((t_data *)(it->data))->to_up = 0;
		}
		else
		{
			((t_data *)(it->data))->cost_pb = ((t_data *)(it->data))->cur_pos;
			((t_data *)(it->data))->to_up = 1;
		}
		it = it->next;
	}
}
