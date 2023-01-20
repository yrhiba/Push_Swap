/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/20 01:21:29 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_in_sub(t_push_swap *stacks)
{
	t_data	*curr;
	t_data	*it;
	int		j;
	int		i;

	j = 1;
	while (j < stacks->size_a)
	{
		curr = (t_data *)my_list_get(stacks->stack_a, j);
		i = 0;
		while (i < j)
		{
			it = (t_data *)my_list_get(stacks->stack_a, i);
			if ((it->data < curr->data) && (curr->lis < it->lis))
				curr->lis = it->lis;
			i++;
		}
		curr->lis++;
		j++;
	}
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

	set_tar_pos(stacks);
	set_prev_data(stacks->stack_a);
	set_in_sub(stacks);

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
	return (ps_clear(stacks), 0);
}

/*

	4 2 3 5 7

	1 2 1 1 1
			
		i j


	0 4 2 
	1 1 1
	1 2 2
*/
