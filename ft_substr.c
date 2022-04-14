/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:23:08 by user              #+#    #+#             */
/*   Updated: 2022/04/14 14:12:43 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
 
  /* int main()
{

    char *s = 	s = ft_substr("tripouille", 100, 1);

	 
     printf("%s\n", s);
    return(0);

}   */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t x;
    size_t len1;
    char *ptr;
    ptr = "";
    len1 = ft_strlen(s);
    if(start < len1)
        ptr = malloc(len1-start);
    else if(start>= len1)
    {       ptr = malloc(1);
        return(ptr);
    }
    x = 0;
    
 
    while(s[x] && x<len )
    {
        ptr[x] = s[start];
        x++;
        start++;
    }
    ptr[x] = '\0';

    return(ptr);

}
