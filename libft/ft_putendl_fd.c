/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:07:20 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:07:22 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)

{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int main()
{
	int myDescri=open("my.txt", O_RDWR | O_CREAT, 0777 );
	ft_putendl_fd("furkan",myDescri);


}
*/