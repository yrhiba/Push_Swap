/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:27:00 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/12 09:41:42 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_push_swap *stacks)
{
	if (push(&(stacks->stack_b), &(stacks->stack_a)) != 1)
		return ;
	ft_printf("pb\n");
	stacks->size_b++;
	stacks->size_a--;
}
