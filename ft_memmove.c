/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:54:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/06 11:41:02 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

/* int		main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	 

	dest = src + 1;
	alarm(5);
	 
		if (dest != ft_memmove(dest, "consectetur", 5))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
		write(1, "\n",1);
	
	 
	
		if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
		write(1, "\n",1);
	
	 
	
		if (dest != ft_memmove(dest, src, 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
		write(1, "\n",1);
	
	 
	
		if (src != ft_memmove(src, dest, 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
		write(1, "\n",1);
	
	 
	
		if (src != ft_memmove(src, dest, 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	
	return (0);
} */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*array;
	char	*array2;
	size_t	x;

	array = (char *)src;
	array2 = (char *)dst;
	x = 0;
	while (x < len)
	{
		array2[x] = array[x];
		x++;
	}
	  dst = array2;
	return (dst);
}
