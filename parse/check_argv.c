/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:51:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/18 23:49:56 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	duplicated_num(t_my_list *nums, int num)
{
	t_my_list	*iterator;

	iterator = nums;
	while (iterator)
	{
		if (*((int *)(iterator->data)) == num)
			return (1);
		iterator = iterator->next;
	}
	return (0);
}

void	check_min_max(t_push_swap *stacks, int index, int num)
{
	if (index == 1)
	{
		stacks->min = num;
		stacks->max = num;
		return ;
	}
	if (stacks->max < num)
		stacks->max = num;
	if (stacks->min > num)
		stacks->min = num;
}

int	check_argv(int ac, char **av, t_push_swap *stacks)
{
	int	num;
	int	i;

	i = 0;
	while (++i < ac)
	{
		if (!ft_isint(av[i]))
			return (-1);
		num = ft_atoi(av[i]);
		if (duplicated_num(stacks->stack_a, num))
			return (-1);
		if (my_list_push_back(&(stacks->stack_a),
				my_list_new_elem(ft_intdup(num))) == -1)
			return (-1);
		check_min_max(stacks, i, num);
		stacks->size_a++;
	}
	return (0);
}
