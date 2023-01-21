/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_in_sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:54:41 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/21 15:44:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_in_sub(t_push_swap *stacks, int lis)
{
	t_data	*it;
	int		fo;
	int		data;

	fo = 1;
	it = (t_data *)my_list_back(stacks->stack_a);
	while (it)
	{
		if (fo && (it->lis == lis))
		{
			it->in_sub = 1;
			data = it->data;
			lis -= 1;
			fo = 0;
		}
		else if ((data > it->data) && (it->lis == lis))
		{
			it->in_sub = 1;
			lis -= 1;
			data = it->data;
		}
		it = it->prev;
	}
}
