/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:51:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/01/24 02:14:31 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	duplicated_num(t_my_list *nums, int num)
{
	t_my_list	*iterator;

	iterator = nums;
	while (iterator)
	{
		if ((((t_data *)(iterator->data))->data) == num)
			return (1);
		iterator = iterator->next;
	}
	return (0);
}

static void	check_min_max(t_push_swap *stacks, int index, int num)
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

static int	start_check_argv(int ac, char **av, t_push_swap *stacks)
{
	int	num;
	int	i;

	i = -1;
	while (++i < ac)
	{
		if (!ft_isint(av[i]))
			return (av_clear(av), -1);
		num = ft_atoi(av[i]);
		if (duplicated_num(stacks->stack_a, num))
			return (av_clear(av), -1);
		if (my_list_push_back(&(stacks->stack_a),
				my_list_new_elem(data_dup(num, i - 1))) == -1)
			return (av_clear(av), -1);
		check_min_max(stacks, i, num);
		stacks->size_a++;
	}
	return (av_clear(av), 0);
}

static char	*joined(char *s1, char *s2)
{
	char	*rtn;
	char	*tmp;

	rtn = ft_strjoin(s1, " ");
	if (!rtn)
		return (NULL);
	tmp = ft_strjoin(rtn, s2);
	free(rtn);
	if (!tmp)
		return (NULL);
	rtn = tmp;
	return (rtn);
}

int	check_argv(int ac, char **av, t_push_swap *stacks)
{
	char	**oav;
	char	*tmp;
	char	*jav;
	int		i;

	jav = ft_strdup("");
	if (!jav)
		return (-1);
	i = 1;
	while (i < ac)
	{
		if (!av_isvalid(av[i]))
			return (free(jav), -1);
		tmp = joined(jav, av[i]);
		free(jav);
		if (!tmp)
			return (-1);
		jav = tmp;
		i++;
	}
	oav = ft_split(jav, (char)32);
	if (!oav)
		return (free(jav), -1);
	return (free(jav), start_check_argv(word_count(oav), oav, stacks));
}
