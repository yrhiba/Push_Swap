/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_to_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:24:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 19:00:38 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_data	*get_to(t_my_list *it, t_data *data)
{
	t_data	*top;
	t_data	*back;

	top = (t_data *)my_list_front(it);
	back = (t_data *)my_list_back(it);
	if ((data->data < back->data) && (data->data > top->data))
		return (back);
	if ((data->data > back->data) && (data->data < top->data))
		return (top);
	while (it)
	{
		top = it->data;
		if (top->prev && top->data > data->data && data->data > top->prev->data)
			return (top);
		it = it->next;
	}
	return ((t_data *)0);
}

t_data	*get_to_data(t_push_swap *stacks, t_data *data)
{
	t_data		*to;
	t_data		*min;
	t_data		*max;

	to = 0;
	min = get_min_data(stacks->stack_a);
	max = get_max_data(stacks->stack_a);
	if (data->data < max->data && data->data > min->data)
		return (get_to(stacks->stack_a, data));
	if ((data->data < min->data) || (data->data > max->data))
		return (min);
	return ((t_data *)0);
}
