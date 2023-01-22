/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_cost_pb_in_sub.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:39:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 01:03:13 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*get_min_cost_pb_in_sub(t_push_swap *stacks)
{
	t_my_list	*it;
	t_data		*min;

	min = (t_data *)0;
	it = stacks->stack_a;
	while (it)
	{
		if (!(((t_data *)(it->data))->in_sub) && (!min
			|| (min->cost_pb > (((t_data *)(it->data))->cost_pb))))
			min = (t_data *)it->data;
		it = it->next;
	}
	return (min);
}
