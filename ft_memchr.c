/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:08:31 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/20 10:20:22 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(s[i] == c)
			return((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
