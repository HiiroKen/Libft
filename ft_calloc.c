/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:21:28 by fmorra            #+#    #+#             */
/*   Updated: 2024/05/03 15:50:17 by fmorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size && nmemb > (size_t)-1 / size)
		return (NULL);
	mem = (void *) malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (size * nmemb));
	return (mem);
}
