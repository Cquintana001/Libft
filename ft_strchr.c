/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:32:21 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 13:56:17 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *strchr(const char *s, int c);

int main()
{
	char array[] = "Hola";

	int c = 'o';

	printf("Mi funcion da: %s", strchr(array, c));

	return(0);

}

char *strchr(const char *s, int c)
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