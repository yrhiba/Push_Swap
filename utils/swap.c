/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:34:23 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 20:03:20 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_my_list **stack)
{
	t_my_list	*first;
	t_my_list	*second;
	t_my_list	*third;

	if (!stack)
		return (-1);
	if (my_list_empty(*stack) || !((*stack)->next))
		return (0);
	return (first = *stack, second = (*stack)->next, third = second->next,
		first->next = third, *stack = second, (*stack)->next = first, 0);
}
