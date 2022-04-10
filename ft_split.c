/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:02:51 by user              #+#    #+#             */
/*   Updated: 2022/04/10 16:57:37 by caquinta         ###   ########.fr       */
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
		if(s[i]!=c)
		{
			count++;
			while(s[i]!=c)
			{
				i++;
			}
		}
		i++;
	}
	return(count);	
}

 

char	**ft_split(char const *s, char c)
{
	char **ptr = malloc(count_words(s,c) +1);
	int x;
	int i;
	int y;

	y =0;
	x = 0;
	while(s[x])
	{	i=0;
		while(s[x]!=c)
		{
			ptr[y][i] = s[x];
			i++;
			x++;
		}
		ptr[y][i] = '\0';
		x++;
		y++;	
	}
	return(ptr);
}

int main()
{
	char array[] = "abaabaaabaaaa";
	char c = 'b';
	char **array2 = ft_split(array, c);
	printf("La primera string es: %c",array2[0][1] );
	return (0);

}