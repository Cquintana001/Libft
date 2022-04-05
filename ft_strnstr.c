/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:12:27 by caquinta          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 14:22:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
=======
/*   Updated: 2022/04/04 19:05:28 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
>>>>>>> eb043b67fb3c78ae7bf721726a4cc0ed60a71fd3
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/* int	main(void)
{
<<<<<<< HEAD
	char array1[] = "Hola a todos";
	char array2[] = "z";
	 
	printf("Mi funcion da: %s\n", ft_strnstr(array1, array2, 1));



}*/


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	int x;
	int y;
	size_t z;

	char *hay = (char*)haystack;
	z=0;
	 x=0;
	 if(needle[0] =='\0')
	 	return(hay);
	 while(haystack[x])
	 {
		if(haystack[x] == needle[0])
		{
			y =x;
			while(haystack[y]==needle[z] && z <len )
=======
	const char	*str;

	str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	printf("El primer test da: %s\n", str);
	str = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	printf("El segundo test da: %s\n", str);
	str = ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	printf("El tercer test da: %s\n", str);
	str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("El noveno test da: %s\n", str);
	return (0);
} */

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
				- 1 < len)
>>>>>>> eb043b67fb3c78ae7bf721726a4cc0ed60a71fd3
			{
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
