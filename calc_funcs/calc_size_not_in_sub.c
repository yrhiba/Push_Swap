/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_size_not_in_sub.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:09:38 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 03:50:55 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calc_size_not_in_sub(t_my_list *stack)
{
	t_my_list	*it;
	t_data		*data;
	int			size;

	size = 0;
	it = stack;
	while (it)
	{
		data = (t_data *)it->data;
		if (!(data->in_sub))
			size++;
		it = it->next;
	}
	return (size);
}
