/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_details.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:03:06 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 14:49:31 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	num_limit(long num)
{
	if (num > MAX_INT || num < MIN_INT)
		ft_error_mesage();
}

static void	more_than_one_argv(t_list **stack_a, char **argv, int i)
{
	int		j;
	long	num;
	t_list	*new_node;
	char	**temp;

	temp = ft_split(argv[i], ' ');
	j = 0;
	while (temp[j])
	{
		num = ft_atoi(temp[j]);
		num_limit(num);
		free(temp[j]);
		new_node = ft_lstnew(num, -1);
		ft_lstadd_back(stack_a, new_node);
		j++;
	}
	free(temp);
}

static void	one_argv(t_list **stack_a, char **argv, int i)
{
	long	num;
	t_list	*new_node;

	num = ft_atoi(argv[i]);
	num_limit(num);
	new_node = ft_lstnew(num, -1);
	ft_lstadd_back(stack_a, new_node);
}

void	argv_split(char **argv, t_list **stack_a, int argc)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (count_string(argv[i], 32) > 1)
			more_than_one_argv(stack_a, argv, i);
		else if (argc != 2)
			one_argv(stack_a, argv, i);
		else
			exit(0);
		i++;
	}
}
