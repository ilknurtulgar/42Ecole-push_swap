/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:55:00 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 13:58:43 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	two_len_sort(t_list **stack_a)
{
	sa(stack_a);
}

static void	three_len_sort(t_list **stack_a, int max_flag)
{
	if ((*stack_a)->flag == max_flag)
		ra(stack_a);
	else if ((*stack_a)->next->flag == max_flag)
		rra(stack_a);
	if (!is_sort_check(stack_a, 0))
		sa(stack_a);
}

void	push_three(t_list **stack_a, t_list **stack_b, int max_flag)
{
	pb(stack_a, stack_b);
	three_len_sort(stack_a, max_flag);
	pa(stack_a, stack_b);
}

void	push_four(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	four_len_sort(stack_a, stack_b, 1, 4);
	pa(stack_a, stack_b);
}

void	which_arg_sort(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len == 2)
		two_len_sort(stack_a);
	else if (len == 3)
		three_len_sort(stack_a, 2);
	else if (len == 4)
		four_len_sort(stack_a, stack_b, 0, 3);
	else if (len == 5)
		five_len_sort(stack_a, stack_b, 0);
	else
		radix_sort(stack_a, stack_b);
}
