/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:23:08 by user              #+#    #+#             */
/*   Updated: 2022/04/11 17:52:14 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
/* int main()
{

printf("El valor de mi funcion es: %s",ft_substr("hola a todos", 5, 6));

return (0);


} */
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t x;

    x = 0;
    char *ptr = malloc(len+1);
    
    while(s[x] && x<len)
    {
        ptr[x] = s[start];
        x++;
        start++;
    }
    ptr[x] = '\0';

    return(ptr);

}
