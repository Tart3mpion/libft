/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:47:38 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/23 21:56:23 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *str;

	i = ft_strlen(set);
	j = ft_strlen(s1);
	//voir si il y a un set au début et à la fin
	str = (char *)malloc(sizeof(s1) * (j - (i * 2) + 1)

	while(s1)
		while(s1[i] != set[i])
			str[i++] = s1[i++];
		j = ft_strlen(s1);
		while(s1[i] != set[i])
	
