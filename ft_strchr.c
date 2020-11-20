/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:29:55 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/19 18:35:37 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *strchr(const char *s, int c)
{
	int i;

	i = 0;
	while(*s)
	{
		if(s[i] == c)
			return((char *)s + i);
		i++;
	}
	if(s[i] == c)
		return((char *)s + i);
	return(NULL);
}
