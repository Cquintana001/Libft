/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:36:20 by user              #+#    #+#             */
/*   Updated: 2022/04/15 12:33:48 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

void ft_putnbr_fd(int n, int fd)
{   
    char    *str;
    if(n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }  
    str = ft_itoa(n);
    ft_putstr_fd(str, fd);
    free(str);
}