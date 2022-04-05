/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:19:01 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/05 11:20:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);


int main()
{
	char array1[11] = "Hola";
	char array2[] = "Adioss";
	
	printf("La funcion original da: %zu\n", strlcat(array1, array2, 0));

	printf("array1 da: %s\n", array1);
	printf("array2 da: %s\n", array2);
	
	char array3[] = "Hola";
	char array4[] = "Adioss";
	
	printf("Mi funcion da: %zu\n", ft_strlcat(array3, array4, 0));

	printf("array1 da: %s\n", array1);
	printf("array2 da: %s\n", array2);
	



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
	size=x;
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
	while (src[x])
		x++;
	size += x;
	if(dstsize!=0)
	{
	return (size);
	}
	else 
		return(x);
}