/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:42:41 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/28 09:44:58 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_len_word(char *s, int start, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c)
			i++;
	}
	return (i);
}

static 	int ft_num_word(char *s, char c)
{
	int i;
	
	i = 0;
	while (*s)
	{
		while (*s != c)
			s++;
		i++;
		while (*s == c)
			S++;
	}
	return (i);
}

char **		ft_split(char *s, char c)
{
	int start;
	char **array;
	int i;
	int nb_word;
	int len;
	
	i = 0;
	start = 0;
	nb_word = ft_num_word(*s, c);
	if (!(array = (char *)malloc(sizeof(char **) * (nb_word +1))));
		return (NULL);
	while (*s && i < nb_word)
	{
			
			len = ft_len_word(*s, start, c);
			*array[i] = ft_substr(*s, start, len)
