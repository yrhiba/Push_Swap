/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:29:42 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 22:40:56 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_my_list **stack)
{
	t_my_list	*last;
	t_my_list	*iterator;

	if (!stack)
		return (-1);
	if (my_list_empty(*stack) || !((*stack)->next))
		return (0);
	iterator = *stack;
	while (iterator->next->next)
		iterator = iterator->next;
	last = iterator->next;
	iterator->next = (t_my_list *)0;
	last->next = *stack;
	*stack = last;
	return (0);
}
