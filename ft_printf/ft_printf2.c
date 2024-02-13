/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:03:18 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:03:18 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int nb)
{
	int	ret;

	ret = 0;
	if (nb >= 16)
		ret += print_hex(nb / 16);
	if ((nb % 16) < 10)
		ret += print_char((nb % 16) + 48);
	else
		ret += print_char((nb % 16) + 87);
	return (ret);
}

int	print_upperhex(unsigned int nb)
{
	int	ret;

	ret = 0;
	if (nb >= 16)
		ret += print_upperhex(nb / 16);
	if ((nb % 16) < 10)
		ret += print_char((nb % 16) + 48);
	else
		ret += print_char((nb % 16) + 55);
	return (ret);
}

int	print_pointer(unsigned long p)
{
	int	i;

	i = 0;
	if (p >= 16)
		i += print_pointer(p / 16);
	if ((p % 16) < 10)
		i += print_char((p % 16) + '0');
	else
		i += print_char((p % 16) + 87);
	return (i);
}
