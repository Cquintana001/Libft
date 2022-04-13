/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:14:24 by user              #+#    #+#             */
/*   Updated: 2022/04/13 12:24:15 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);


void ft_putstr_fd(char *s, int fd)
{
    int len;
     
     len = ft_strlen(s);

     write(fd, s, len);

}