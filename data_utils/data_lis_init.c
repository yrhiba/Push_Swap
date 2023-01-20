/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_lis_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:58:19 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 18:11:28 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	data_lis_init(t_push_swap *stacks)
{
	t_my_list	*it;

	it = stacks->stack_a;
	while (it)
	{
		((t_data *)(it->data))->lis = 1;
		it = it->next;
	}
}
