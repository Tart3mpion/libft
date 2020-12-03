/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:04:12 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/12/02 16:22:49 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int len_nb(long nb)
{
	int len;

	len = 0;
	if (nb == 0)
			return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char *res;
	int len;
	long nb;

	nb = n;
	len = len_nb(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (res);
}
	
	

