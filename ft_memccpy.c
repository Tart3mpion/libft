/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:39:18 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/25 13:27:42 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t 	i;
	char	*dst_cpy;
	char	*src_cpy;;

	i = 0;
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while(i < n)
	{
		dst_cpy = src_cpy;
		if(src_cpy[i] == c)
			return (((char *)dst) + i);
		i++;
	}
	return(NULL);
}

