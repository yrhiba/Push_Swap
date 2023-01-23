/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:48:20 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 00:24:30 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_cost_pa(t_push_swap *stacks)
{
	t_my_list	*it;
	t_data		*to;
	t_data		*data;

	set_cur_pos(stacks);
	set_prev_data(stacks);
	it = stacks->stack_b;
	while (it)
	{
		data = (t_data *)it->data;
		to = get_to_data(stacks, data);
		if (data->cur_pos > (stacks->size_b / 2))
		{
			data->cost_pa = stacks->size_b - data->cur_pos + to->cost_pb;
			data->to_up = 0;
		}
		else
		{
			data->cost_pa = data->cur_pos + to->cost_pb;
			data->to_up = 1;
		}
		it = it->next;
	}
}
