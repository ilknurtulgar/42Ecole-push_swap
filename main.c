/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:29:25 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 15:49:00 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	arg_control(char **argv, int argc, t_list **stack_a)
{
	int	i;

	i = 1;
	if (argv[1][0] == '\0')
		exit(0);
	while (i < argc)
	{
		is_empty(argv[i]);
		is_argv_digit(argv[i]);
		i++;
	}
	argv_split(argv, stack_a, argc);
	is_same_int(stack_a);
	is_sort_check(stack_a, 1);
}

static void	free_stack(t_list **stack)
{
	t_list	*node;
	t_list	*tmp;

	node = *stack;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	free(stack);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = (t_list **)ft_calloc(1, sizeof(t_list *));
	stack_b = (t_list **)ft_calloc(1, sizeof(t_list *));
	if (argc > 1)
	{
		arg_control(argv, argc, stack_a);
		flag_assign(stack_a);
		which_arg_sort(stack_a, stack_b);
	}
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
