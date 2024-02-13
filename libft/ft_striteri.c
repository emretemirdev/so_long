/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:07:47 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:07:47 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void ft_upper(unsigned int i,char *s)
{
	int x = 0;
	if(*s)
	{
		s[x]-=32;
	}
}
int	main ()
{
	char str[] = "furkan";
	ft_striteri(str,ft_upper);
	printf("%s",str);

}*/
