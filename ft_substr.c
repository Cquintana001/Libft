/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:23:08 by user              #+#    #+#             */
/*   Updated: 2022/04/17 14:47:07 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
 
 /* int main()
{
    char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
    
   
		if (!(strsub = ft_substr(str, 0, 10)))
			printf("NULL");
		else
			printf("%s\n",strsub);
		if (str == strsub)
			printf("\nA new string was not returned");
          

         if (!(strsub = ft_substr(str, 7, 10)))
			printf("NULL");
		else
			printf("%s",strsub);
		if (str == strsub)
			printf("\nA new string was not returned");   
    return(0);

}     */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t x;
    size_t len1;
    char *ptr;
    ptr = "";
    len1 = ft_strlen(s);
    if(len < len1)
        ptr = malloc(len +1 );
    else
        ptr = malloc(len1 +1);
    // else if(start >= len1)               
    //     return(ptr);
    x = 0;

    if(start < len1)
    {
        while(s[start] && x<len)
        {
            ptr[x] = s[start];
            x++;
            start++;
        }
    }
    ptr[x] = '\0';

    return(ptr);

}
