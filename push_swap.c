/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:38:30 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/12 11:18:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_push_swap	*stacks;

	if (ac == 1)
		return (0);
	if (staks_init(&stacks) == -1)
		return (ft_printf("Error\n"), 0);
	if (check_argv(ac, av, stacks) == -1)
		return (ps_clear(stacks), ft_printf("Error\n"), 0);
	
	// debug section
	ft_printf("\nInit Stacks \n\n");
	print_ab(stacks);
	int op = 0;
	int n;
	while (!(is_sorted(stacks->stack_a, INCORDER) && stacks->size_b == 0))
	{
		printf("\n");
		printf("1 : sa  | 2 : sb  | 3 : ss | ");
		printf("4 : ra  | 5 : rb  | 6 : rr | ");
		printf("7 : rra | 8 : rrb | 9 : rrr | ");
		printf("10 : pa  | 11 : pb \n");
		printf("-> Enter operations to execute : ");
		scanf("%d", &n);
		printf("\n");
		if (n == 1)
		{
			sa(stacks);
			ft_printf("sa");
		}
		else if (n == 2)
		{
			sb(stacks);
			ft_printf("sb");
		}
		else if (n == 3)
		{
			ss(stacks);
			ft_printf("ss");
		}
		else if (n == 4)
		{
			ra(stacks);
			ft_printf("ra");
		}
		else if (n == 5)
		{
			rb(stacks);
			ft_printf("rb");
		}
		else if (n == 6)
		{
			rr(stacks);
			ft_printf("rr");
		}
		else if (n == 7)
		{
			rra(stacks);
			ft_printf("rra");
		}
		else if (n == 8)
		{
			rrb(stacks);
			ft_printf("rrb");
		}
		else if (n == 9)
		{
			rrr(stacks);
			ft_printf("rrr");
		}
		else if (n == 10)
		{
			pa(stacks);
			ft_printf("pa");
		}
		else if (n == 11)
		{
			pb(stacks);
			ft_printf("pb");
		}
		else
		{
			ft_printf("invalid input !");
			op--;
		}
		op++;
		ft_printf(" | operations exuceted : %d \n\n", op);
		print_ab(stacks);
	}
	printf("\nCongratulations You Sorted the Stack With ->%d<- operations.\n", op);
	// debug end
	return (ps_clear(stacks), 0);
}
