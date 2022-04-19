/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:02:51 by user              #+#    #+#             */
/*   Updated: 2022/04/19 08:35:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* function that count the amount of words 
you get when separated by c. */

static int	count_words(const char *str, char c)
{
	int x;
	int checkw;

	x = 0;
	checkw = 0; 
	while (*str)
	{
		if (*str != c && checkw == 0)
		{
			checkw = 1;
			x++;
		}
		else if (*str == c)
			checkw = 0;
		str++;
	}
	return (x);
}
/* function that measure the length of 
the string between two index and then store that string in a local variable "word"
 */
static char	*word_length(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(((finish - start) + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_length(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}