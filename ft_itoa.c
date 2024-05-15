/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:46:24 by fmorra            #+#    #+#             */
/*   Updated: 2024/05/07 14:57:44 by fmorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_int(long int n)
{
	int	len;

	if (n < 0)
		n *= -1;
	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	itoa(long n, int index, char *res)
{
	res[index] = n % 10 + '0';
	if (index > 0)
		itoa(n / 10, index - 1, res);
}

char	*ft_itoa(int n)
{
	int		len;
	long	long_n;
	char	*res;

	len = len_int(n);
	long_n = n;
	if (long_n < 0)
	{
		long_n *= -1;
		len++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = 0;
	itoa(long_n, len - 1, res);
	if (n < 0)
		res[0] = '-';
	return (res);
}
