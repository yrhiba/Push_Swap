/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_to_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:24:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 02:12:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_data	*get_to(t_my_list *it, t_data *data)
{
	t_data	*top;

	((t_data *)(it->data))->prev = (t_data *)my_list_back(it);
	while (it)
	{
		top = it->data;
		if (top->data > data->data && data->data > top->prev->data)
			return (top);
		it = it->next;
	}
	return ((t_data *)0);
}

t_data	*get_to_data(t_push_swap *stacks, t_data *data)
{
	t_data	*min;
	t_data	*max;

	min = get_min_data(stacks->stack_a);
	max = get_max_data(stacks->stack_a);
	if ((data->data < min->data) || (data->data > max->data))
		return (min);
	if (data->data < max->data && data->data > min->data)
		return (get_to(stacks->stack_a, data));
	return ((t_data *)0);
}
