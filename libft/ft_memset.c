/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:07:12 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:07:13 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	char	*str;

	str = (char *)b;
	while (len > 0)
	{
		*str++ = c;
		len--;
	}
	return (b);
}
/*
int main ()
{
	char str[] = "furykangny";
	ft_memset (str, 'x', 5);
	printf("%s",str);

}*/