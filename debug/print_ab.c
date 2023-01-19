/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:09:49 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/19 03:14:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long long	max_ll(long long a, long long b)
{
	if (a > b)
		return (a);
	return (b);
}

static int	print_one(t_my_list **it, long long index, long long size)
{
	int	n;

	if (!my_list_empty(*it) && index < size)
	{
		n = ((t_data *)(*it)->data)->data;
		ft_printf(" |%12d  | ", n);
		return (*it = (*it)->next, 1);
	}
	return (ft_printf(" |%14c| ", 32), 0);
}

void	print_ab(t_push_swap *staks)
{
	long long	i;
	t_my_list	*iterator_a;
	t_my_list	*iterator_b;

	ft_printf("\n");
	iterator_a = staks->stack_a;
	iterator_b = staks->stack_b;
	i = max_ll(staks->size_a, staks->size_b) - 1;
	while (i >= 0)
	{
		print_one(&iterator_a, i, staks->size_a);
		print_one(&iterator_b, i, staks->size_b);
		ft_printf("\n");
		i--;
	}
	ft_printf(" |--------------|  |--------------| \n");
	ft_printf("      stack A           stack B     \n");
	ft_printf("     ( %-5d )         ( %-5d )     \n\n", staks->size_a,
		staks->size_b);
}
