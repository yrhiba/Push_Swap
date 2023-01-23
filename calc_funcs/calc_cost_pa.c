/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:48:20 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 18:46:26 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	calc_cost(t_push_swap *stacks, t_data *data, t_data *to)
{
	if (data->cur_pos > (stacks->size_b / 2))
	{
		data->to_up = 0;
		data->cost_pa = stacks->size_b - data->cur_pos + to->cost_pb;
	}
	else
	{
		data->to_up = 1;
		data->cost_pa = data->cur_pos + to->cost_pb;
	}
	if ((!to->to_up && !data->to_up) || (to->to_up && data->to_up))
		return (max_int(to->cost_pb, data->cost_pa));
	return (data->cost_pa);
}

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
		data->cost_pa = calc_cost(stacks, data, to);
		it = it->next;
	}
}
