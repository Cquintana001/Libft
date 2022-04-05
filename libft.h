/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:15:45 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/05 09:02:37 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char *ft_strchr(const char *s, int c);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
char *ft_strrchr(const char *s, int c);
void *ft_memmove(void *dst, const void *src, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);





