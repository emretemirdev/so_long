/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:08:27 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:08:29 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*str;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen < start)
		return (ft_strdup(""));
	finish = 0;
	if (start < slen)
		finish = (slen - start);
	if (finish > len)
		finish = len;
	str = (char *)malloc(sizeof(char) * (finish + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, finish + 1);
	return (str);
}

/*
int	main(void)
{
char str[] = "furkan";
printf("%s", ft_substr(str, 1,3));
return (0);
}
*/