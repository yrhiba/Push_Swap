/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_lsi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:42:23 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 14:48:48 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_lsi(t_my_list *it)
{
	int		max;
	t_data	*data;

	max = 0;
	while (it)
	{
		data = (t_data *)it->data;
		if (max < data->lis)
			max = data->lis;
		it = it->next;
	}
	return (max);
}
