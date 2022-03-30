/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:54:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/03/30 11:41:36 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include <memory.h>
#include <string.h>
#include <stdio.h>

 

int main()
{
	char str1[7] = "abcdef";

   printf( "The string: %s\n", str1 );
   memcpy( (str1+6), str1, 10 );
   printf( "New string: %s\n", str1 );

    
	char str2[] = "abcdef";

   printf("\nstr1: %s\n", str2);
   printf( "The string: %s\n", str2 );
   memmove( (str2+6), str2, 10 );
   printf( "New string: %s\n", str2 );

}