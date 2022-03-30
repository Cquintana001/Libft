/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:48:57 by caquinta          #+#    #+#             */
/*   Updated: 2022/03/30 08:30:07 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <unistd.h>
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	 
	char array1[] = "Hola";
	char array2[] = "Hola";
	bzero(array1, 0);
	ft_bzero(array2, 0);
	printf("La funcion original da: %s\n", array1);
	printf("Mi funcion da:%s", array2);
	write(1, &array1[2], 1);
	write(1, "\n", 1);
	write(1, &array1[3], 1);
	write(1, "\n", 1);
	write(1, &array2[2], 1);
	write(1, "\n", 1);
	write(1, &array2[3], 1);
	return (0);
}
void	ft_bzero(void *s, size_t n)
{
	int		x;
	char	*f;

	x = 0;
	f = s;
	if (n != 0)
	{
		while (f[x] && x < n)
		{
			f[x] = '\0';
			x++;
		}
	}
}
