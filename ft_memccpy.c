/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:39:18 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/20 09:58:08 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t 	i;
	char	*dst_cpy;
	char	*src;

	i = 0;
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while(i < n)
	{
		dst_cpy = src_cpy;
		if(src[i] == c)
			return((unsigned char *)dst + i)
		i++;
	}
	return(NULL);
}

