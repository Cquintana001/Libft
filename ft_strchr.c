/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:32:21 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/03 11:30:11 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c);

/* int main()
{
	char array[] = "Hola";

	int c = 'o';

	printf("Mi funcion da: %s", strchr(array, c));

	return(0);

} */

char *ft_strchr(const char *s, int c)
{	int x;
 

	x =0;
	while(s[x])
	{
		if(s[x] == c)
		{	 
			return((char *)&s[x]);
		}
	x++;
	}
	return(NULL);
}