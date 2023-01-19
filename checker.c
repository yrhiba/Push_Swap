/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:16:39 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/19 03:13:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	do_operation(char *cmd, t_push_swap *stacks)
{
	if (ft_strcmp(cmd, SA) == 0)
		return (sa(stacks), 0);
	else if (ft_strcmp(cmd, SB) == 0)
		return (sb(stacks), 0);
	else if (ft_strcmp(cmd, SS) == 0)
		return (ss(stacks), 0);
	else if (ft_strcmp(cmd, RA) == 0)
		return (ra(stacks), 0);
	else if (ft_strcmp(cmd, RB) == 0)
		return (rb(stacks), 0);
	else if (ft_strcmp(cmd, RR) == 0)
		return (rr(stacks), 0);
	else if (ft_strcmp(cmd, RRA) == 0)
		return (rra(stacks), 0);
	else if (ft_strcmp(cmd, RRB) == 0)
		return (rrb(stacks), 0);
	else if (ft_strcmp(cmd, RRR) == 0)
		return (rrr(stacks), 0);
	else if (ft_strcmp(cmd, PA) == 0)
		return (pa(stacks), 0);
	else if (ft_strcmp(cmd, PB) == 0)
		return (pb(stacks), 0);
	return (-1);
}

static int	exec_operations(t_push_swap *stacks)
{
	char	*cmd;

	print_ab(stacks);
	cmd = get_next_line(STDIN_FILENO);
	while (cmd)
	{
		if (do_operation(cmd, stacks) == -1)
			return (free(cmd), -1);
		print_ab(stacks);
		free(cmd);
		cmd = get_next_line(STDIN_FILENO);
	}
	if (is_sorted(stacks->stack_a, INCORDER) && my_list_empty(stacks->stack_b))
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	t_push_swap	*stacks;
	int			r;

	if (ac == 1)
		return (0);
	if (staks_init(&stacks) == -1)
		return (ft_printf("Error\n"), 0);
	if (check_argv(ac, av, stacks) == -1)
		return (ft_printf("Error\n"), ps_clear(stacks), 0);
	r = exec_operations(stacks);
	if (r == 0)
		return (ft_printf("OK\n"), ps_clear(stacks), 0);
	if (r == 1)
		return (ft_printf("KO\n"), ps_clear(stacks), 0);
	return (ft_printf("Error\n"), ps_clear(stacks), 0);
}
