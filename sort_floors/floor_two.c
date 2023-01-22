/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:00:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 20:08:56 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	debug(t_push_swap *stacks)
{
	t_my_list	*it;
	t_data		*data;

	print_ab(stacks);
	it = stacks->stack_b;
	while (it)
	{
		data = it->data;
		ft_printf("data : %-5d | ", data->data);
		ft_printf("cur_pos : %-5d | ", data->cur_pos);
		ft_printf("cost pa : %-5d \n", data->cost_pa);
		it = it->next;
	}
}

void	floor_two(t_push_swap *stacks)
{
	set_cur_pos(stacks);
	set_prev_data(stacks);
	calc_cost_pa(stacks);
	// debug
	debug(stacks);
}
