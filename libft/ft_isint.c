/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:06:14 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/11 20:40:53 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isint(char *str)
{
	int			is_neg;
	int			i;
	long long	n;

	if (!(*str))
		return (0);
	n = 0;
	i = 0;
	is_neg = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = 1;
		i++;
	}
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			n = (n * 10) + (str[i] - '0');
		else
			return (0);
		i++;
	}
	if ((n <= INT_MAX && !is_neg) || (((n - 1) <= INT_MAX) && is_neg))
		return (1);
	return (0);
}
