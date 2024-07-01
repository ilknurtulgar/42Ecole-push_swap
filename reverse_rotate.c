/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:15:51 by itulgar           #+#    #+#             */
/*   Updated: 2024/06/05 16:15:51 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **data)
{
	t_list	*end_node;
	t_list	*last_second_node;

	end_node = ft_lstlast(*data);
	last_second_node = (*data);
	while (last_second_node->next->next != NULL)
		last_second_node = last_second_node->next;
	last_second_node->next = NULL;
	ft_lstadd_front(data, end_node);
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}
