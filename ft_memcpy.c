/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:39:35 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/20 09:17:14 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest_cpy;
	char	*src_cpy;

	i = 0;
	dest_cpy = (char *)dest;
	src_cpy = (const char *)src;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}

