/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:59:26 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 18:09:30 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char	*ft_strrchr(const char *s, int c);
/* int main()
{
	char array[] = "Hola";

	int c = 'o';

	printf("Mi funcion da: %s", strchr(array, c));

	return(0);

} */

char	*ft_strrchr(const char *s, int c)
{	
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
		{
			return ((char *) & s[x]);
		}
	x++;
	}
	return (NULL);
}
