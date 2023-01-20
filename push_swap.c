/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 19:02:20 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_push_swap *stacks)
{
	set_tar_pos(stacks);
	longest_incresing_sub(stacks);

	// debug
	ft_printf("\nLongest Incresing Subsquece : \n");
	t_my_list *it = stacks->stack_a;
	while (it)
	{
		if (((t_data *)(it->data))->in_sub)
			ft_printf("%d ", ((t_data *)(it->data))->data);
		it = it->next;
	}
	ft_printf("\n\n");
	print_ab(stacks);
	// debug end
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
void debug(t_push_swap *stacks)
{
	t_my_list	*it;

	// debug section ?? start
	it = stacks->stack_a;
	while (it)
	{
		ft_printf("pos : %d | data : %d | ", ((t_data *)(it->data))->cur_pos,
				((t_data *)(it->data))->data);
		ft_printf("tar_pos : %d | in_sub : %d | lis : %d | ",
					((t_data *)(it->data))->tar_pos,
					((t_data *)(it->data))->in_sub,
					((t_data *)(it->data))->lis);
		ft_printf("\n");
		it = it->next;
	}
	// debug section ?? end
	ft_printf("\n");
}
*/
