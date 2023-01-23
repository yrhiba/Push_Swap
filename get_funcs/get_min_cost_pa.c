/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_cost_pa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:28:21 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 23:33:42 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*get_min_cost_pa(t_push_swap *stacks)
{
	t_my_list	*it;
	t_data		*min;

	min = 0;
	it = stacks->stack_b;
	while (it)
	{
		if (!min || (min->cost_pa > ((t_data *)(it->data))->cost_pa))
			min = (t_data *)it->data;
		it = it->next;
	}
	return (min);
}
