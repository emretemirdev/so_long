/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:08:04 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:08:05 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)

{
	size_t	l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}
/*
#include <stdio.h>
int	main(void)
{
		char str[] = "furkangunay";
	size_t length = ft_strlen(str);
	printf("Length of the string: %zu\n", length);
	return (0);
}*/