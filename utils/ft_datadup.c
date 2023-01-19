/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datadup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 02:07:19 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/19 23:38:55 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*ft_datadup(int data, int cur_pos)
{
	t_data	*r;

	r = (t_data *)malloc(sizeof(t_data));
	if (!r)
		return (NULL);
	r->tar_pos = -1;
	return (r->lis = 1, r->cur_pos = cur_pos, r->data = data, r->in_sub = 0, r);
}
