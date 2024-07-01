/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:35:07 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 14:52:09 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **data)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*data) < 2)
		return ;
	first = (*data);
	second = (*data)->next;
	first->next = second->next;
	second->next = first;
	*data = second;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}
