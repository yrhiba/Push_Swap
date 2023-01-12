/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:27:00 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/12 09:41:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_push_swap *stacks)
{
	if (push(&(stacks->stack_a), &(stacks->stack_b)) != 1)
		return ;
	ft_printf("pa\n");
	stacks->size_a++;
	stacks->size_b--;
}
