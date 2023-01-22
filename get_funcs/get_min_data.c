/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:49:01 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 13:51:45 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*get_min_data(t_my_list *stack)
{
	t_my_list	*it;
	t_data		*min;

	it = stack;
	min = 0;
	while (it)
	{
		if (!min || (min->data > ((t_data *)(it->data))->data))
			min = (t_data *)it->data;
		it = it->next;
	}
	return (min);
}
