/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:25:40 by user              #+#    #+#             */
/*   Updated: 2022/04/09 18:56:39 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *b, int c, size_t len);
/* int main()
{
    char	*str;
	void	*array;

		str = (char *)ft_calloc(SIZE_MAX-10, SIZE_MAX-10);
		if (!str)
			printf("Mi funcion es: %p\n", str);
		else
			write(1, str, 30);
            write(1,"\n",1);
		str = (char *)calloc(SIZE_MAX, SIZE_MAX);
		if (!str)
			printf("La funcion original es: %p", str);
		else
			write(1, str, 30);
            write(1,"\n",1);
	return (0);
}   */

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*array;

	array = malloc(nmemb * size);
	if (nmemb >= (SIZE_MAX / size))
		return (NULL);
	if (array)
	{
		ft_memset(array, 0, nmemb * size);
		return (array);
	}
	else
		return (NULL);
}
