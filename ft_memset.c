/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:55:24 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/23 15:01:55 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	ptr = (unsigned char *)b;

	while(i < len)
	{
		*ptr++ = (unsigned char)c;
	}
	return(b);
}
