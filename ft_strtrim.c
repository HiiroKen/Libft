/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:38:58 by fmorra            #+#    #+#             */
/*   Updated: 2024/05/08 14:29:37 by fmorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	size_t	i;

	cpy = NULL;
	i = 0;
	if (s1)
	{
		while (*s1 && set && ft_strchr(set, (int)*s1))
			s1++;
		i = ft_strlen(s1);
		while (i > 0 && set && ft_strchr(set, (int)s1[i - 1]))
			i--;
		cpy = ft_calloc(sizeof(char), i + 1);
		if (cpy)
			ft_strlcpy(cpy, s1, i + 1);
	}
	return (cpy);
}
