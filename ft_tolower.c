/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:35:45 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 13:29:11 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int ft_toupper(int c);

int main()
{
	printf("Mi funcion da: %d\n", ft_toupper(65));
	char a = ft_toupper(65);
	write(1, &a,1);
	return(0);
}

int ft_toupper(int c)
{
	if(c>=65 && c<=90)
	{
		c +=32;
	}
	return(c);
}