/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:24:48 by fmorra            #+#    #+#             */
/*   Updated: 2024/05/07 15:07:02 by fmorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if ((!s1 || ft_strlen(s1) == 0) && (!s2 || ft_strlen(s2) == 0))
		return (ft_strdup(""));
	else if (!s1 || ft_strlen(s1) == 0)
		return (ft_strdup(s2));
	else if (!s2 || ft_strlen(s2) == 0)
		return (ft_strdup(s1));
	res = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (res);
}
