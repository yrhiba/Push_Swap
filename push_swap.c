/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/21 15:47:59 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_push_swap *stacks)
{
	t_my_list	*it;

	set_tar_pos(stacks);
	longest_incresing_sub(stacks);
	calc_cost_pb(stacks);
	it = stacks->stack_a;
	while (it)
	{
		ft_printf("data : %5d -> cost : %5d\n", ((t_data *)(it->data))->data,
			((t_data *)(it->data))->cost_pb);
		it = it->next;
	}
}

int	main(int ac, char **av)
{
	t_push_swap	*stacks;

	if (ac == 1)
		return (0);
	if (staks_init(&stacks) == -1)
		return (ft_printf("Error\n"), 0);
	if (check_argv(ac, av, stacks) == -1)
		return (ft_printf("Error\n"), ps_clear(stacks), 0);
	return (push_swap(stacks), ps_clear(stacks), 0);
}

/*

if (size == 3)
{
}

if (size == 5)
{
}

if (size > 5 && stack a not sorted)
{
	1 -> calc lonngest incresing subsquence (testing every case (ra,
				sa) included)
	2 -> push not in the lis in stack b
	3 -> calc how take every elem to take there target position
	4 -> pick how have the least operations and push it to stack a
			-> 	calc the rb or ra that we need 
				and do rr or rrr if ra and rb are both gona used
	5 -> when stack b is empty rotate stack a at the correct position
	6 -> finish the program
}

*/
