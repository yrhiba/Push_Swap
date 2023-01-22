/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/22 01:03:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void debug(t_push_swap *stacks)
{
	t_my_list *it;
	t_data *data;

	it = stacks->stack_a;
	while (it)
	{
		data = it->data;
		if (data->in_sub)
			ft_printf(" %d | ", data->data);
		it = it->next;
	}
	ft_printf("\n");

	t_data *min = get_min_cost_pb_in_sub(stacks);

	ft_printf("\nto pb : %d \n\n", min->data);

	it = stacks->stack_a;
	while (it)
	{
		data = it->data;
		ft_printf("data : %-5d | ", data->data);
		ft_printf("cost_pb : %-5d \n", data->cost_pb);
		it = it->next;
	}
	
}

void	push_swap(t_push_swap *stacks)
{
	set_tar_pos(stacks);
	calc_cost_pb(stacks);
	longest_incresing_sub(stacks);
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
