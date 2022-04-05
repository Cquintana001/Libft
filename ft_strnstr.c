/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 08:56:49 by user              #+#    #+#             */
/*   Updated: 2022/04/05 09:00:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

 



char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	*hay;

	hay = (char *)haystack;
	z = 1;
	x = 0;
	if (!needle[0])
		return (hay);
	while (haystack[x] && x < len)
	{
		if (haystack[x] == needle[0])
		{
			y = x + 1;
			while (haystack[y] == needle[z] && needle[z] && haystack[y] && y
				- 1 < len)			{
				y++;
				z++;
			}
			if (z == ft_strlen(needle))
				return (hay + x);
		}
		x++;
	}
	return (NULL);
}
