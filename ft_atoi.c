/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:02:48 by user              #+#    #+#             */
/*   Updated: 2022/04/06 16:31:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int atoi(const char *nptr);
int main ()
{


    
}
int atoi(const char *nptr)
{
    int	sum;
	int	sign;
	int	x;

	sum = 0;
	sign = 1;
	x = 0;
    while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
    while (nptr[x] >= '0' && nptr[x] <= '9')
	{
		 
			sum = sum * 10 + *nptr - '0';
		 
		x++;
	}
    return(sum);
}