/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:09:47 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 16:07:46 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error_mesage(void)
{
	ft_printf("Error\n");
	exit(0);
}

int	is_argv_digit(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]) && argv[i] != 32)
		{
			if (!ft_isdigit(argv[i + 1]) || (argv[i + 1] == 32 || argv[i
						+ 1] == '\0'))
				ft_error_mesage();
		}
		i++;
	}
	return (1);
}

void	is_empty(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] && argv[i] == 32)
		i++;
	if (argv[i] == '\0')
		ft_error_mesage();
}

void	is_same_int(t_list **stack_a)
{
	t_list	*head;
	t_list	*next_content;
	int		temp;

	head = *stack_a;
	while (head != NULL)
	{
		temp = head->content;
		next_content = head->next;
		while (next_content != NULL)
		{
			if (temp == next_content->content)
				ft_error_mesage();
			next_content = next_content->next;
		}
		head = head->next;
	}
}

int	is_sort_check(t_list **stack_a, int first_check)
{
	t_list	*head;
	t_list	*next_content;
	int		temp;

	head = *stack_a;
	while (head != NULL)
	{
		temp = head->content;
		next_content = head->next;
		if (temp < next_content->content && next_content->next == NULL)
		{
			if (first_check == 1)
				exit(0);
			else
				return (1);
		}
		else if (temp > next_content->content)
			return (0);
		head = head->next;
	}
	return (0);
}
