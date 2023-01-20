/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_incresing_sub.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:46:45 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 19:02:31 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	longest_incresing_sub(t_push_swap *stacks)
{
	int			max_lsi;
	int			tmp;
	long long	i;

	max_lsi = 0;
	i = 0;
	while (i < stacks->size_a)
	{
		data_lis_init(stacks);
		set_prev_data(stacks);
		set_lis(stacks);
		tmp = get_max_lsi(stacks->stack_a);
		if (tmp > max_lsi)
		{
			data_in_sub_init(stacks);
			set_in_sub(stacks, tmp);
			max_lsi = tmp;
		}
		ra(stacks);
		i++;
	}
}
