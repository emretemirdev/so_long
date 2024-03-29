/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:04:38 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:04:39 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	size_t				i;
	int					sign;
	unsigned long int	atoi;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	atoi = 0;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	return (atoi * sign);
}
/*
int main()
{
	char *str="-12345";
	printf("%d",ft_atoi(str));
}*/