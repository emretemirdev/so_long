/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:04:58 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:29:08 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret_arr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ret_arr = malloc(count * size);
	if (!ret_arr)
		return (NULL);
	ft_bzero(ret_arr, count * size);
	return (ret_arr);
}
