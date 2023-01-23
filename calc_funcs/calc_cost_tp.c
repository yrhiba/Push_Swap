/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost_tp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 00:26:48 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 00:51:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_cost_tp(t_push_swap *stacks)
{
	t_my_list	*it;

	it = stacks->stack_b;
	while (it)
	{
		if (((t_data *)(it->data))->cur_pos > (stacks->size_b / 2))
			((t_data *)(it->data))->cost_tp = stacks->size_b
				- ((t_data *)(it->data))->cur_pos;
		else
			((t_data *)(it->data))->cost_tp = ((t_data *)(it->data))->cur_pos;
		it = it->next;
	}
}
