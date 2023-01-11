/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staks_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:07:35 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 10:24:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	staks_allocation(t_push_swap *staks)
{
	t_my_list	*a;
	t_my_list	*b;

	a = (t_my_list *)malloc(sizeof(t_my_list));
	b = (t_my_list *)malloc(sizeof(t_my_list));
	if (!a || !b)
		return (free(a), free(b), -1);
	a = (t_my_list *)0;
	b = (t_my_list *)0;
	return (staks->stack_a = a, staks->stack_b = b, 0);
}

int	staks_init(t_push_swap **staks)
{
	if (!staks)
		return (-1);
	*staks = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!(*staks))
		return (-1);
	if (staks_allocation(*staks) == -1)
		return (free(*staks), -1);
	return ((*staks)->size_a = 0, (*staks)->size_b = 0, 0);
}
