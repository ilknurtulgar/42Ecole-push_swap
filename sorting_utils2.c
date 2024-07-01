/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:17:34 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 15:41:47 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	four_len_sort(t_list **stack_a, t_list **stack_b, int min_flag,
		int max_flag)
{
	if ((*stack_a)->next->flag == min_flag)
		sa(stack_a);
	else if ((*stack_a)->next->next->flag == min_flag)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->next->next->flag == min_flag)
		rra(stack_a);
	push_three(stack_a, stack_b, max_flag);
}

void	five_len_sort(t_list **stack_a, t_list **stack_b, int min_flag)
{
	if ((*stack_a)->next->flag == min_flag)
		sa(stack_a);
	else if ((*stack_a)->next->next->flag == min_flag)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->next->next->next->flag == min_flag)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->next->next->next->flag == min_flag)
	{
		rra(stack_a);
	}
	push_four(stack_a, stack_b);
}
