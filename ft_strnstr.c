/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:28:12 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/12/03 09:59:58 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t x;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		x = 0;
		if (haystack[i] == needle[x])
		{
			while ((i + x) < len && haystack[x + i] == needle[x])
			{
				x++;
				if (!(needle[x]))
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (0);
}
