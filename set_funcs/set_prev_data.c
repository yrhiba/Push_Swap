/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prev_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:31:36 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 16:41:30 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_prev_data(t_push_swap *stacks)
{
	t_my_list	*it;
	t_data		*prev;

	prev = (t_data *)0;
	it = stacks->stack_a;
	while (it)
	{
		((t_data *)(it->data))->prev = prev;
		prev = (t_data *)(it->data);
		it = it->next;
	}
}
