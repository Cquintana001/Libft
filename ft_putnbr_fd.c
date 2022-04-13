/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:36:20 by user              #+#    #+#             */
/*   Updated: 2022/04/13 12:42:20 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
char *ft_itoa(int n);
void ft_putnbr_fd(int n, int fd);

void ft_putnbr_fd(int n, int fd)
{
    char *ptr;
    
    ptr = ft_itoa(n);
    ft_putstr_fd(ptr, fd);
}