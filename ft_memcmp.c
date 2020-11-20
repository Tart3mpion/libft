/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:20:46 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/20 10:30:49 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void s2, size_t n)
{
	size_t i;
	unsigned char *s1_cpy;
	unsigned char *s2_cpy;

	i = 0;
	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while(*s1 && *s2)
	{
		if(s1_cpy[i] != s2_cpy[i])
			return((s1_cpy - s2_cpy);
		i++;
	}
	return(0);
}

		
