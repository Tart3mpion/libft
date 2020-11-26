/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:57:57 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/26 13:56:28 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len_dst;
	size_t len_src;
	size_t i;

	i = 0;	
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while (src[i] && len_dst < (dstsize - 1))
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}	
	dst[len_dst] = '\0';
	return (len_src);
}
