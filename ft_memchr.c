/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:18:25 by user              #+#    #+#             */
/*   Updated: 2022/04/09 13:01:39 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);
/*int main()
{
	int		tab[7];
	size_t	x;
	char	*q;

    tab[7] = {-49, 49, 1, -1, 0, -2, 2};
		printf("%s\n", (char *)ft_memchr(tab, -1, 7));
        printf("%s\n", (char *)memchr(tab, -1, 7));
    return (0);
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{	
	size_t			x;
	unsigned char	*q;
	unsigned char	d;

	d = c;
	q = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (*q == d)
		{
			return ((void *)q);
		}
		q++;
		x++;
	}
	return (NULL);
}
