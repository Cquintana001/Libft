/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:54:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 18:57:20 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

/* int	main(void)
{
	char	src[]= "hola a todos";
	char	dst[]= "";

		
	printf("Mi  funcion da: %s", ft_memmove(dst, src, 4));
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
	return (dst);
}
