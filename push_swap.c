/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/24 02:32:23 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	quick_sort(t_push_swap *stacks)
{
	t_data	*front;
	t_data	*second;

	front = ((t_data *)my_list_front(stacks->stack_a));
	second = ((t_data *)my_list_get(stacks->stack_a, 1));
	if (front->data > second->data)
	{
		sa(stacks);
		ft_printf("sa\n");
	}
}

static void	three_sort(t_push_swap *stacks)
{
	t_data	*max;

	max = get_max_data(stacks->stack_a);
	if (max->cur_pos == 0)
	{
		ra(stacks);
		ft_printf("ra\n");
	}
	else if (max->cur_pos == 1)
	{
		rra(stacks);
		ft_printf("rra\n");
	}
	quick_sort(stacks);
}

void	push_swap(t_push_swap *stacks)
{
	init_floor(stacks);
	if (stacks->size_a == 2)
	{
		quick_sort(stacks);
		return ;
	}
	if (stacks->size_a == 3)
	{
		three_sort(stacks);
		return ;
	}
	floor_one(stacks);
	floor_two(stacks);
	end_floor(stacks);
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
