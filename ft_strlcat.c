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
#include "libft.h"
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlen(const char *s);

int main()
{
	char array1[16] = "This is ";
	char array2[] = "a potentially long string";
	
	printf("La funcion original da: %zu\n", strlcat(array1, array2, 0));

	printf("array1 da: %s\n", array1);
	printf("array2 da: %s\n", array2);
	
	char array3[16] = "This is ";
	char array4[] = "a potentially long string";
		
	printf("Mi funcion da: %zu\n", ft_strlcat(array3, array4, 0));

	printf("array1 da: %s\n", array1);
	printf("array2 da: %s\n", array2);
	



}

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	x;
	size_t	srclen;
	size_t dstlen;
	size_t y;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);

	x = 0;
	y = 0;
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
	

	if(dstsize+ srclen < srclen + dstlen)
	{
	return (dstsize + srclen);
	}
	else 
		return(srclen + dstlen );
}
