/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:02:55 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/19 03:19:07 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_my_list *it, int order)
{
	if (order != DECORDER && order != INCORDER)
		return (-1);
	if (my_list_empty(it) || !(it->next))
		return (1);
	while (it->next)
	{
		if (order == DECORDER
			&& ((t_data *)(it->data))->data
			< ((t_data *)(it->next->data))->data)
			return (0);
		else if (order == INCORDER
			&& ((t_data *)(it->data))->data
			> ((t_data *)(it->next->data))->data)
			return (0);
		it = it->next;
	}
	return (1);
}
