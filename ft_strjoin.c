/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:43:09 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/23 20:43:49 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(*s1)) * i;
	if(!str)
		return (NULL);
	i = 0;
	j = 0;
	if(s1)
		while(s1)
			str[i++] = s1[i++];
	if(s2)
		while(s2)
			str[i++] = s2[j++]
	str[i] = '\0';
	return (str);
}