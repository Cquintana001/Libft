/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:10:37 by user              #+#    #+#             */
/*   Updated: 2022/04/13 11:44:44 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_itoa(int n);
 
  int main()
{
    int		len;
    char *res = ft_itoa(-2147483648LL);

	len = 0;
	while (res[len])
		len++;
    printf("El valor de mi len es: %d\n", len);
    printf("El valor de mi res es: %s\n", res); 

 

    return (0);

} 
char *ft_itoa(int n)
{
    char *ptr;
    int checksign;
    int size;
    int numb;
    printf("el valor de mi n es: %d\n", n);
      
  
    size = 0;
    if(n<0)
    { checksign = 1;
        n *=-1;
        size++;
        printf("el valor de n es: %d\n", n);
    }
    numb = n;
    printf("el valor de mi size es: %d\n", size);
  while (numb>=10)
  {
      numb = (numb - numb%10)/10;
      size++;  
  }
  numb = n;   
  size++; 
      printf("el valor de mi size es: %d\n", size);
      
    ptr =(char*) malloc(size +1);
    if(checksign==1)       
        ptr[0] = '-';
  ptr[size]= '\0';
  while(n>=10)
  {    
    ptr[size-1] = (n%10) + '0';  
    n = (n - n%10)/10;
    size--;
  }  
  ptr[size-1]= n + '0'; 
    return(ptr);
}

