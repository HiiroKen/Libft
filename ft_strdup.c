/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:11:23 by fmorra            #+#    #+#             */
/*   Updated: 2024/05/07 15:05:54 by fmorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	i = ft_strlen(s) + 1;
	d = malloc(sizeof(char) * i);
	ft_strlcpy(d, s, i);
	return (d);
}
