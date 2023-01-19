/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tar_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:05:02 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 00:07:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_my_list	*get_min(t_my_list *stack)
{
	t_my_list	*min;
	t_my_list	*it;

	min = stack;
	it = stack->next;
	while (it)
	{
		if (((((t_data *)(it->data))->tar_pos == -1)
			&& ((t_data *)(it->data))->data < ((t_data *)(min->data))->data)
			|| ((t_data *)(min->data))->tar_pos != -1)
			min = it;
		it = it->next;
	}
	return (min);
}

void	set_tar_pos(t_push_swap *staks)
{
	long long i;
	t_my_list *min;

	i = 0;
	while (i < staks->size_a)
	{
		min = get_min(staks->stack_a);
		((t_data *)(min->data))->tar_pos = i++;
	}
}