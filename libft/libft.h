/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:28:55 by itulgar           #+#    #+#             */
/*   Updated: 2024/07/01 16:02:01 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				flag;
	struct s_list	*next;
}					t_list;

long				ft_atoi(const char *str);
int					ft_isdigit(int sayi);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				ft_lstadd_front(t_list **lst, t_list *new);

size_t				ft_strlen(const char *src);

char				*ft_strdup(const char *src);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				**ft_split(char *s, char c);
int					count_string(char const *s, char c);

t_list				*ft_lstnew(int content, int flag);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);

#endif