/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_statu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:27:22 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 01:30:34 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_statu(t_push_swap *stacks)
{
	if (is_sorted(stacks->stack_a, INCORDER) && my_list_empty(stacks->stack_b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
