/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:40:10 by user              #+#    #+#             */
/*   Updated: 2022/04/18 12:27:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>


 char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
 size_t	ft_strlen(const char *s);

 char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
 {
     int x;

     char *ptr;
    if (!s || !f)
		return (NULL);
	if (!(ptr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
     x = 0;
     while(s[x])
     {
        ptr[x] = f(x, s[x]);
        x++;
     }
     ptr[x] = '\0';
    
    return(ptr);
    
}