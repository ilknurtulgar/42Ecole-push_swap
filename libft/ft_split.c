/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:17:39 by itulgar           #+#    #+#             */
/*   Updated: 2024/05/24 18:58:34 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_string(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (count);
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	return (count);
}

static int	count_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char *s, char c)
{
	int		word;
	int		index;
	int		len;
	char	**sub;

	index = 0;
	if (!s)
		return (NULL);
	word = count_string(s, c);
	sub = ft_calloc(word + 1, sizeof(char *));
	if (!sub)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break ;
		len = count_char(s, c);
		sub[index++] = ft_substr(s, 0, len);
		while (*s && *s != c)
			s++;
	}
	sub[index] = NULL;
	return (sub);
}
