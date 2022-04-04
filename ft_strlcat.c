/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:19:01 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/04 20:40:13 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

int main()
{
	char array1[] = "Hola";
	char array2[] = "Adios";
	
	printf("La funcion original da: %lu\n", strlcat(array1, array2, 4));

	printf("%s\n", array1);
	
	char array3[] = "Hola";
	char array4[] = "Adios";
	
	printf("Mi funcion da: %zu\n", ft_strlcat(array3, array4, 4));

	printf("%s\n", array1);
	



}

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	x;
	size_t	size;
	size_t y;

	x = 0;
	y = 0;
	while (dst[x])
		x++; 
	 
	if (dstsize != 0)
	{
		while (src[y] && x < dstsize - 1)
		{
			dst[x] = src[y];
			x++;
			y++;
		}
		dst[x] = '\0';
	}
	x = 0;
	while (dst[x])
		x++;
	size = x;
	x = 0;
	return (size);
}