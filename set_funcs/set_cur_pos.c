/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cur_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 02:00:17 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/21 02:06:54 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_cur_pos_to(t_my_list *stack)
{
	t_my_list	*it;
	int			i;

	i = 0;
	it = stack;
	while (it)
	{
		((t_data *)(it->data))->cur_pos = i++;
		it = it->next;
	}
}

void	set_cur_pos(t_push_swap *stacks)
{
	set_cur_pos_to(stacks->stack_a);
	set_cur_pos_to(stacks->stack_b);
}
