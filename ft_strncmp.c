/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:59:16 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 12:06:19 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	t1;
	unsigned char	t2;

	x = 0;
	while (x < n)
	{
		t1 = s1[x];
		t2 = s2[x];
		if (!(t1 == t2))
			return (t1 - t2);
		else if (t1 > t2)
			return (t1 - t2);
		x++;
	}
	return (0);
}
