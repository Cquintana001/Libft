/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:32:25 by caquinta          #+#    #+#             */
/*   Updated: 2022/03/30 10:36:14 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SYNOPSIS
     #include <string.h>

     void *
     memcpy(void *restrict dst, const void *restrict src, size_t n);

DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src over-
     lap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3)
     instead.

RETURN VALUES
     The memcpy() function returns the original value of dst. */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main()
{ 	char array1[] = "Hola Carlos";
	char array2[] = "Adios Pepito";

	ft_memcpy(array2, array2 + 6, 6 * sizeof(char));

	printf("%s\n", ft_memcpy(array1, array2 + 6, 6 * sizeof(char)));

	return(0);

	
	
	}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{

	char* s1;
	char* s2;

	int x;

	x = 0;
	 
	s1 = dst;
	s2 = (char*)src;
	while(src + x && x < n)
	{
		s1[x] = s2[x];
		x++;
	}
	return(dst);

}
 

