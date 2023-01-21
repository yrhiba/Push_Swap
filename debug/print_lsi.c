/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lsi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 01:25:34 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/21 15:45:21 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lsi(t_push_swap *stacks)
{
	t_my_list	*it;

	ft_printf("\nLongest Incresing Subsquece : \n");
	it = stacks->stack_a;
	while (it)
	{
		if (((t_data *)(it->data))->in_sub)
			ft_printf("%d ", ((t_data *)(it->data))->data);
		it = it->next;
	}
	ft_printf("\n\n");
}
