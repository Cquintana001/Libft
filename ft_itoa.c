/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:10:37 by user              #+#    #+#             */
/*   Updated: 2022/04/18 12:32:22 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_itoa(int n);
size_t	ft_strlen(const char *s);
 
  /*  int main()
{
    int		len;
    char *res = ft_itoa(-2147483648LL);

	len = 0;
	while (res[len])
		len++;
    printf("El valor de mi len es: %d\n", len);
    printf("El valor de mi res es: %s\n", res); 
    
 

    return (0);

}      */

char *ft_itoa(int n)
{
    char *ptr;
    int checksign;
    int size;
    long numb;
    long t = n;
     
    size = 0;
       
    if(t<0)
    { checksign = 1;
        t *=-1;
        size++;
         
    }
    numb = t;   
  while (numb>=10)
  {
      numb = (numb - numb%10)/10;
      size++;  
  }
  numb = t;   
  size++;
  if (!(ptr = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);    
    if(checksign==1)       
        ptr[0] = '-';
  ptr[size]= '\0';
  while(t>=10)
  {    
    ptr[size-1] = (t%10) + '0';  
    t = (t - t%10)/10;
    size--;
  }  
  ptr[size-1]= t + '0'; 
    return(ptr);
}
  