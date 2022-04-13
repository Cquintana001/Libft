/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:25:44 by user              #+#    #+#             */
/*   Updated: 2022/04/13 12:32:08 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putendl_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

void ft_putendl_fd(char *s, int fd)
{
   int len;
     
     len = ft_strlen(s);

     
     write(fd, s, len);
     write(fd, "\n", 1);
}