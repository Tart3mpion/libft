/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:37:10 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/19 13:56:57 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

size_t	strlcpy(char *dest, const char*src, size_t dstsize)
{
	size_t i;

	if(dstsize <= 0)
		return(ft_strlen(src));
	while(src[i] && ssrc[i] < dstsize -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(ft_strlen(src);
}

	
