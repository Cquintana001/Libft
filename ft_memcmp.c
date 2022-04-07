/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:16:45 by user              #+#    #+#             */
/*   Updated: 2022/04/07 10:09:50 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);
/*int main()

{
    printf("Mi funcion da: %d\n", ft_memcmp("test", "tEst", 4));

    printf("La funcion original da: %d\n", memcmp("test", "tEst", 4));

    return 0;
}*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t x;
    char *p1 = (char*)s1;
    char *p2 = (char*)s2;
    x = 0;
    while (x<n)
    {
        if(p1[x] < p2[x] || (!p1[x] && p2[x]))
        {
            return(-1);
        }
        if(p1[x] > p2[x] || (p1[x] && !p2[x]))
        {
            return(1);
        }
        x++;
    }
    return 0;

}