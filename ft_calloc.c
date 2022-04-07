/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:25:40 by user              #+#    #+#             */
/*   Updated: 2022/04/07 11:06:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *b, int c, size_t len);
/*int main()
{

    char	*str;

		str = (char *)ft_calloc(30, 1);
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
            write(1,"\n",1);
   
	return (0);
}*/

void *ft_calloc(size_t nmemb, size_t size)

{
    
    void * array = malloc(nmemb * size);
    ft_memset(array, 0, nmemb*size);
     

    return (array);

}