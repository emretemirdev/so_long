/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:07:55 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:07:56 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = 0;
	if (size <= d_len)
		return (size + s_len);
	else
	{
		while (d_len + i < size - 1 && src[i])
		{
			dst[d_len + i] = src[i];
			i++;
		}
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int	main(void)
{
	char dst[10] = "kubilay"; // Hedef karakter dizisi
	char src[] = "bilgili";  // Kaynak karakter dizisi

	size_t result_len = ft_strlcat(dst, src, 10);
	printf("%s",dst);

	return (0);
}*/