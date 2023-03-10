/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prev_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:31:36 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 18:53:46 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_prev_to(t_my_list *it)
{
	t_data	*prev;

	prev = (t_data *)0;
	while (it)
	{
		((t_data *)(it->data))->prev = prev;
		prev = (t_data *)(it->data);
		it = it->next;
	}
}

void	set_prev_data(t_push_swap *stacks)
{
	set_prev_to(stacks->stack_a);
	set_prev_to(stacks->stack_b);
}
