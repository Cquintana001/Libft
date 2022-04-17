/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:30:25 by user              #+#    #+#             */
/*   Updated: 2022/04/17 16:22:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int ft_lstsize(t_list *lst)
{
    int		x;
	t_list	*temp;

    x = 1;
    temp = lst;
    
    while(temp->next !=NULL)
    {
        temp = temp->next;
        x++;
    }
    return(x);
}