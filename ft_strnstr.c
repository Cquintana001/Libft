/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:12:27 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/04 14:22:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

/*int main()
{
	char array1[] = "Hola a todos";
	char array2[] = "z";
	 
	printf("Mi funcion da: %s\n", ft_strnstr(array1, array2, 1));



}*/


char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	int x;
	int y;
	size_t z;

	char *hay = (char*)haystack;
	z=0;
	 x=0;
	 if(needle[0] =='\0')
	 	return(hay);
	 while(haystack[x])
	 {
		if(haystack[x] == needle[0])
		{
			y =x;
			while(haystack[y]==needle[z] && z <len )
			{
				y++;
				z++;
			}
			if(z == len)
				return(hay + x);
		}
		x++;
	 }
	 return(NULL);
}