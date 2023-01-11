/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:09:18 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 20:36:53 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_my_list **to, t_my_list **from)
{
	t_my_list	*top_b;

	if (!to || !from)
		return (-1);
	if (my_list_empty(*from))
		return (0);
	return (top_b = *from, *from = (*from)->next, top_b->next = *to, *to = top_b, 1);
}
