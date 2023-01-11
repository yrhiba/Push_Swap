/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:02:55 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 19:23:01 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sorted(t_my_list *it_stack, int order)
{
	if (order != DECORDER && order != INCORDER)
		return (-1);
	if (my_list_empty(it_stack) || !(it_stack->next))
		return (1);
	while (it_stack->next)
	{
		if (order == DECORDER
			&& *((int *)(it_stack->data)) < *((int *)(it_stack->next->data)))
			return (0);
		else if (order == INCORDER
				&& *((int *)(it_stack->data)) > *((int *)(it_stack->next->data)))
			return (0);
		it_stack = it_stack->next;
	}
	return (1);
}
