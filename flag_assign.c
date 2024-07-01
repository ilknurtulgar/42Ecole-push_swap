/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_assign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:12:10 by itulgar           #+#    #+#             */
/*   Updated: 2024/06/05 16:47:57 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	flag_assign(t_list **stack_a)
{
	int		min;
	int		flag_count;
	int		node_count;
	t_list	*min_node;
	t_list	*temp;

	node_count = ft_lstsize(*stack_a);
	flag_count = 0;
	while (flag_count < node_count)
	{
		min = MAX_INT;
		temp = *stack_a;
		min_node = NULL;
		while (temp != NULL)
		{
			if ((temp->content <= min) && (temp->flag == -1))
			{
				min = temp->content;
				min_node = temp;
			}
			temp = temp->next;
		}
		min_node->flag = flag_count;
		flag_count++;
	}
}
