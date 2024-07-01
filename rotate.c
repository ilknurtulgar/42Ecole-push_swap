/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:06:58 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 16:06:58 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **data)
{
	t_list	*first_node;
	t_list	*end_node;

	first_node = (*data);
	end_node = ft_lstlast(*data);
	(*data) = (*data)->next;
	end_node->next = first_node;
	first_node->next = NULL;
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}
