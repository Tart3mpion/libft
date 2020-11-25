/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:47:38 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/25 15:57:26 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int to_find(char c, char const *set)
{
	int i;

	i = 0;
	while (*set)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
		
char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *str;
	int i;

	i = 0;	
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && to_find(s1[start], set))
		start++;
	while (s1[end] && to_find(s1[end], set))
		end--;
	if (!(str = (char *)malloc(sizeof(*str) * (start + end + 1))))
	while (start < end)
		str[i++] = s1[start++];
	while (s1[end])
		str[i++] = s1[end++];
	str[i] = '\0';
	return (str);
}

	
			
	
