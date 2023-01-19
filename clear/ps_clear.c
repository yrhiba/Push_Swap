/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:50:15 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/18 23:44:15 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_clear(t_push_swap *staks)
{
	my_list_clear(&(staks->stack_a));
	my_list_clear(&(staks->stack_b));
	free(staks);
	staks = (t_push_swap *)0;
}
