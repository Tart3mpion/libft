/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:24:21 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/20 09:38:52 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *dst_cpy;
	char *tmp;

	i = 0;
	dst_cpy = (char *)dst;
	while(i < len)
	{
		tmp[i] = (char *)src[i];
		i++;
	}
	dst_cpy = tmp;
	return ((char *)dst);
}


