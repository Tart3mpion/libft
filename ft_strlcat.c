/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:57:57 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/19 14:18:47 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	if(i <= dstsize)
		return(ft_strlen(src) + dstsize)
	j = 0;
	while(src[j] && dst[i + j] < dstsize -1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return((i + j) -1); //(ft_strlen(src) + ft_strlen(dst));
}


