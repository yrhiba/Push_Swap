/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:44:29 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 13:51:46 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*get_max_data(t_my_list *stack)
{
	t_my_list	*it;
	t_data		*max;

	it = stack;
	max = 0;
	while (it)
	{
		if (!max || (max->data < ((t_data *)(it->data))->data))
			max = (t_data *)it->data;
		it = it->next;
	}
	return (max);
}
