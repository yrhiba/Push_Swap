/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_two_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:50:59 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/23 18:56:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_m3_con(t_push_swap *stacks, t_data *to)
{
	int	i;

	i = 0;
	while (i < to->cost_pb)
	{
		if (to->to_up)
		{
			ra(stacks);
			ft_printf("ra\n");
		}
		else
		{
			rra(stacks);
			ft_printf("rra\n");
		}
		i++;
	}
}
