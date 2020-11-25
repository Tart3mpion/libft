/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:56:49 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/25 16:35:44 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void *str;
	
	i = 0;
	str = malloc(size * count);
	if (!str)
		return (NULL);
	
	while(i < count)
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}

