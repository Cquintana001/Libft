/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:10:29 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 17:51:40 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
			size_t dstsize);

/* int main()
{
	char array1[] = "Hola mundo a todos";
	char array2[] = "Estamos trabajando en ello";

	printf("\nLa funcion original da: %lu\n",strlcpy(array1, array2, 4));
	printf("array1 da: %s\n\n", array1);
	printf("Array2 con la funcion sizeof da:%lu\n", sizeof(array2));
	printf("Mi funcion da: %lu\n", ft_strlcpy(array1, array2, 4));
	printf("array1 da: %s\n\n", array1);
} */

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{	
	size_t	x;

	x = 0;
	while (dst[x] && src[x] && x < dstsize)
	{
		dst[x] = src[x];
		x++;
	}
	x = 0;
	while (src[x])
		x++;
	return (x);
}
