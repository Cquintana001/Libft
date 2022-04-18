/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:02:04 by user              #+#    #+#             */
/*   Updated: 2022/04/18 12:35:53 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set);
size_t	ft_strlen(const char *s);

/* int main()
{
    printf("La string es: %s", ft_strtrim("carlos", "abc"));
    return(0);
} */
char *ft_strtrim(char const *s1, char const *set)
{
    int x;
    int j;
    int index;
    int check;
    char *ptr;

    index = ft_strlen(s1) -1;
    x = 0;
    check = 0;

    while(x<=index)
    {
        j = 0;
        check = 0;
        while(set[j])
        {
            if(set[j]==s1[x])
             check =1;
            j++;
        }
        if(check == 1)
            x++;
        else
            break;              
    }

    while(index>x)
    {
        j = 0;
        check = 0;
        while(set[j])
        {
            if(set[j]==s1[index])
             check =1;
            j++;
        }
        if(check == 1)
            index--;
        else
            break;              
    }
    if (!(ptr = (char*)malloc(index-x+2)))
		return (NULL);    
    
    j = 0;
    while(x<= index)
    {
        ptr[j] = s1[x];
        j++;
        x++;
    }
    ptr[j] = '\0';
    return(ptr);

}