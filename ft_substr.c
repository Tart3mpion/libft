/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:16:04 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/23 18:52:43 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(s*)) * (len + 1)
	if(!str)
		return (NULL);
	while(i < len)
	{
		str[i] == s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
	
