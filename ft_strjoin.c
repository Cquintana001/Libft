/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:34:35 by user              #+#    #+#             */
/*   Updated: 2022/04/12 09:01:26 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
/* int main()
{
    char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

    printf("La nueva string %s", ft_strjoin(s1,s2));
    return(0);



} */
char *ft_strjoin(char const *s1, char const *s2)
{
     int x;
    char *ptr;
    int j;

    j = 0;
     x =0;

    
    ptr = malloc(ft_strlen(s1)+ ft_strlen(s2)+1);
    while(s1[x])
    {
            ptr[x] = s1[x];
            x++;
    }
     
     
        while(s2[j])
        {
            ptr[x] = s2[j];
            x++;
            j++;
        }
        ptr[x] = '\0';
    return(ptr);
}