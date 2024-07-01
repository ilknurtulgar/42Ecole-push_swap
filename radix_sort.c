/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:38:24 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 15:45:38 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_list **stack_a, t_list **stack_b, int max_bit, int bit)
{
	int	i;
	int	size;

	while (bit < max_bit)
	{
		i = 0;
		size = ft_lstsize(*stack_a);
		while (i < size)
		{
			if (((*stack_a)->flag >> bit) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			i++;
		}
		bit++;
		i = 0;
		size = ft_lstsize(*stack_b);
		while (i < size)
		{
			pa(stack_a, stack_b);
			i++;
		}
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int		max_bit;
	int		num_bit;
	int		flag;

	temp = *stack_a;
	max_bit = 0;
	while (temp)
	{
		flag = temp->flag;
		num_bit = 0;
		while (flag)
		{
			flag >>= 1;
			num_bit++;
		}
		if (num_bit > max_bit)
			max_bit = num_bit;
		temp = temp->next;
	}
	sort(stack_a, stack_b, max_bit, 0);
}
