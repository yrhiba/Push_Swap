/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staks_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:07:35 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/24 02:08:53 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	staks_init(t_push_swap **staks)
{
	if (!staks)
		return (-1);
	*staks = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!(*staks))
		return (-1);
	(*staks)->stack_a = 0;
	(*staks)->stack_b = 0;
	return ((*staks)->size_a = 0, (*staks)->size_b = 0, 0);
}
