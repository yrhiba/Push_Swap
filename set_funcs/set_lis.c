/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_lis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:21:50 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 16:47:43 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_lis(t_push_swap *stacks)
{
	t_data	*curr;
	t_data	*it;
	int		j;
	int		i;
	int		max;

	j = 0;
	while (++j < stacks->size_a)
	{
		curr = (t_data *)my_list_get(stacks->stack_a, j);
		max = 0;
		i = -1;
		while (++i < j)
		{
			it = (t_data *)my_list_get(stacks->stack_a, i);
			if ((it->data < curr->data) && (max < it->lis))
					max = it->lis;
		}
		curr->lis = max + 1;
	}
}
