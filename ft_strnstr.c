/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 08:56:49 by user              #+#    #+#             */
/*   Updated: 2022/04/09 13:26:35 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int main()
{
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	printf("El resultado de la funcion es: %p\n",ft_strnstr(haystack, "abcd", 9));
	printf("El puntero es: %p",haystack +5);
	return (0);

}
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	*hay;

	hay = (char *)haystack;
	z = 1;
	x = -1;
	if (!needle[0])
		return (hay);
	while (haystack[++x] && x < len)
	{
		if (haystack[x] == needle[0])
		{
			y = x + 1;
			while (haystack[y] == needle[z] && needle[z] && haystack[y] && y++
				< len)
				z++;
			if (z == ft_strlen(needle))
				return (hay + x);
		}
	}
	return (NULL);
}
