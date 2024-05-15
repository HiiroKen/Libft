/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:26:52 by fmorra            #+#    #+#             */
/*   Updated: 2024/05/03 14:20:32 by fmorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	cpt;

	i = 1;
	cpt = 0;
	if (!*s)
		return (0);
	if (s[0] != c)
		cpt = 1;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			cpt++;
		i++;
	}
	return (cpt);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		word;
	char	**res;

	res = (char **)ft_calloc(count_word(s, c) + 1, (sizeof(char *)));
	if (!res)
		return (NULL);
	word = 0;
	start = 0;
	while (word < count_word(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		res[word] = ft_substr(s, start, end - start);
		word++;
		start = end;
	}
	res[word] = NULL;
	return (res);
}
