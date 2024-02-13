/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:07:34 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:07:35 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	char	**tab;

	tab = (char **) ft_calloc (count_words(s, c) + 1, sizeof(char *));
	if (!tab || !s)
		return (0);
	i = 0;
	size = 0;
	while (*s)
	{
		if (*s != c)
			size++;
		if (*s == c && size > 0)
		{
			tab[i] = ft_substr((s - size), 0, size);
			i++;
			size = 0;
		}
		s++;
	}
	if (size > 0)
		tab[i] = ft_substr((s - size), 0, size);
	return (tab);
}

static int	count_words(char const *str, char c)
{
	int	count;
	int	new;

	count = 0;
	new = 1;
	while (*str)
	{
		if (*str != c && new == 1)
		{
			count++;
			new = 0;
		}
		if (*str == c)
			new = 1;
		str++;
	}
	return (count);
}
