/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 00:08:06 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_push_swap *staks)
{
	set_tar_pos(staks);
}

int	main(int ac, char **av)
{
	t_push_swap	*stacks;
	t_my_list	*it;

	if (ac == 1)
		return (0);
	if (staks_init(&stacks) == -1)
		return (ft_printf("Error\n"), 0);
	if (check_argv(ac, av, stacks) == -1)
		return (ft_printf("Error\n"), ps_clear(stacks), 0);

	push_swap(stacks);
	
	it = stacks->stack_a;
	while (it)
	{
		ft_printf("pos : %d | data : %d | ", ((t_data *)(it->data))->cur_pos,
				((t_data *)(it->data))->data);
		ft_printf("tar_pos : %d | in_sub : %d | \n",
					((t_data *)(it->data))->tar_pos,
					((t_data *)(it->data))->in_sub);
		it = it->next;
	}
	return (ps_clear(stacks), 0);
}
