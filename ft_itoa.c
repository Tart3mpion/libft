/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:04:12 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/26 21:38:39 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int sign(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}
static int len_nb(int nb)
{
	int len = 0;
	if (nb <= 0)
		++len;
	while (nb != 0)
	{
		++len;
		nb = nb / 10;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char *res;
	int len;
	
	len = len_nb(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	else if (res[0] == 0)
		res[0] = '0';
	while (n != 0)
	{
		--len;
		res[len] = sign(n % 10) + 48;
		n = n / 10;
	}
	return (res);
}
	
	

