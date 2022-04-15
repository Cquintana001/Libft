/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:19:03 by user              #+#    #+#             */
/*   Updated: 2022/04/15 12:13:53 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)

{
	t_list	*new;
		 
	new = (t_list*)malloc(sizeof(t_list));
	if(!new)
		return(NULL);
    new->content = content;
	new->next = NULL;
	return(new);
}
