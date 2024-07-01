/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:30:46 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 14:01:29 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

int		is_argv_digit(char *argv);
void	argv_split(char **argv, t_list **stack_a, int argc);
int		ft_error_mesage(void);
void	is_same_int(t_list **stack_a);
void	is_empty(char *argv);
int		is_sort_check(t_list **stack_a, int first_check);
void	sa(t_list **stack_a);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rra(t_list **stack_a);
void	which_arg_sort(t_list **stack_a, t_list **stack_b);
void	flag_assign(t_list **stack_a);
void	four_len_sort(t_list **stack_a, t_list **stack_b, int min_flag,
			int max_flag);
void	push_four(t_list **stack_a, t_list **stack_b);
void	push_three(t_list **stack_a, t_list **stack_b, int max_flag);
void	five_len_sort(t_list **stack_a, t_list **stack_b, int min_flag);
void	radix_sort(t_list **stack_a, t_list **stack_b);

#endif
