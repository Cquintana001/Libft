/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:23:08 by user              #+#    #+#             */
/*   Updated: 2022/04/14 17:15:56 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
 
/*  int main()
{
    char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
    
   char *bullshit;
		if (!(strsub = ft_substr(str, 400, 20)))
		{	printf("NULL\n");
            
        }
		else
		{
			bullshit = (char *)&strsub[30];
			bullshit = "FULL BULLSHIT";
			if (strsub)
				printf("%s", strsub);
			else
				printf("rip");
		}
		if (str == strsub)
			printf("\nA new string was not returned");
		(void)bullshit;
    return(0);

}    */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t x;
    size_t len1;
    char *ptr;
    ptr = "";
    len1 = ft_strlen(s);
    if(len < len1)
        ptr = malloc(len);
    else
        ptr = malloc(len1);
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
