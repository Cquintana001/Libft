/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:32:25 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/18 13:30:39 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

/* int main()
{ 	char array1[] = "Hola Carlos";
	char array2[] = "Adios Pepito";

	ft_memcpy(array2, array2 + 6, 6 * sizeof(char));

	printf("%s\n", ft_memcpy(array1, array2 + 6, 6 * sizeof(char)));

	return(0);

	
	
	} */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
