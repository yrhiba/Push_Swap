/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_in_sub_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:10:16 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 18:10:47 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	data_in_sub_init(t_push_swap *stacks)
{
	t_my_list	*it;

	it = stacks->stack_a;
	while (it)
	{
		((t_data *)(it->data))->in_sub = 0;
		it = it->next;
	}
}
