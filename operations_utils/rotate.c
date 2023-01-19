/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:54:39 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/12 09:53:18 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_my_list **stack)
{
	t_my_list	*first;
	t_my_list	*iterator;

	if (!stack)
		return (-1);
	if (my_list_empty(*stack) || !((*stack)->next))
		return (0);
	first = *stack;
	*stack = (*stack)->next;
	iterator = *stack;
	while (iterator->next)
		iterator = iterator->next;
	return (iterator->next = first, first->next = (t_my_list *)0, 1);
}
