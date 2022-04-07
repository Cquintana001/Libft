/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:16:45 by user              #+#    #+#             */
/*   Updated: 2022/04/07 10:17:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);
/*int main()

{
    printf("Mi funcion da: %d\n", ft_memcmp("t\200", "t\0", 2));

    printf("La funcion original da: %d\n", memcmp("t\200", "t\0", 2));

    return 0;
}*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t x;
    unsigned char *p1 = (unsigned char*)s1;
    unsigned char *p2 = (unsigned char*)s2;
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