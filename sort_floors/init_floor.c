/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_floor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:04:20 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 01:36:59 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_floor(t_push_swap *stacks)
{
	set_tar_pos(stacks);
	set_cur_pos(stacks);
	calc_cost_pb(stacks);
	longest_incresing_sub(stacks);
}
