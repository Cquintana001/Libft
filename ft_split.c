/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:02:51 by user              #+#    #+#             */
/*   Updated: 2022/04/10 18:42:43 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

   

int count_words(char const *s, char c)

{ 	
	int i;
	int count;

	i=0;
	count=0;

	while(s[i])
	{
		if(s[i]!= c)
		{
			count++;
			
			while(s[i]!=c && s[i])
			{
				i++;
			}
		}
		i++;
	}
	return(count);	
}

int count_letters(char const *s, char c)

{
	int i;
	int count;

	count = 0;
	i = 0;
	while(s[i])
	{	if(s[i] != c)
		{
			count++;		
		}
		i++;	
	}
	return(count);
}

 

   char	**ft_split(char const *s, char c)
{
	char *ptr = malloc(count_words(s,c) * count_letters(s,c) + count_words(s,c));
	int x;
	int i;
	int y;

	y =0;
	x = 0;
	while(s[x])
	{	i=0;
		while(s[x]!=c && s[x])
		{
			ptr[y][i] = s[x];
			i++;
			x++;
		}
		ptr[y][i] = '\0';
		x++;
		y++;	
	}

	free(ptr);
	return(ptr);
}   

int main()
{
	char *array = "abaabaaabaaaa\0";
	char c = 'b';
	printf("El número de palabras de mi string es: %d\n", count_words(array,c));
	printf("El número de letras de mi string es: %d\n", count_letters(array,c));
	char **array2 = ft_split(array, c);
	 
	return (0);

}