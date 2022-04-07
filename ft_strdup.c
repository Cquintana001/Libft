/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:27:29 by user              #+#    #+#             */
/*   Updated: 2022/04/07 14:05:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
 

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;

	 
		if (!(str_dup = ft_strdup(str)))
			ft_print_result("NULL");
		else
			ft_print_result(str_dup);
		if (str_dup == str)
			ft_print_result("\nstr_dup's adress == str's adress");
	
	return (0);
}*/

char *ft_strdup(const char *s)
{       
        char *array;
        int x;
         
        x =ft_strlen(s);
       array = malloc(sizeof(s) * x );
      
        x = 0;
        if(!array)
            return (0);
        else
        {
            x = 0;
            while(s[x])
            {
                array[x] = s[x];
                x++;
            }
            array[x]='\0';    
            return (array);
        }
}
  
 

  