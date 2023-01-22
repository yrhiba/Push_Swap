/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_size_not_in_sub.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:09:38 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 01:12:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_size_not_in_sub(t_push_swap *stacks)
{
	t_my_list	*it;
	t_data		*data;
	int			size;

	size = 0;
	it = stacks->stack_a;
	while (it)
	{
		data = (t_data *)it->data;
		if (!(data->in_sub))
			size++;
		it = it->next;
	}
	return (size);
}
