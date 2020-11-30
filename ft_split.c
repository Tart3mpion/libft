/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:42:41 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/30 17:51:19 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int ft_len_word(const char *s, int start, char c)
{
	int i;
	
	i = 0;

	while (s[start] == c)
		start++;
	while (s[start] != c && s[start] != '\0')
	{
		i++;
		start++;
	}
	return (i);
}

static 	int ft_num_word(const char *s, char c)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		if(s[i]!= c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char		**ft_split(const char *s, char c)
{
	int start;
	char **array;
	int i;
	int nb_word;
	int len;
	
	i = 0;
	start = 0;
	nb_word = ft_num_word(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (nb_word +1))))
		return (NULL);
	while (s[i] && i < nb_word)
	{	
		len = ft_len_word(s, start, c);
		array[i] = ft_substr(s, start, len);
		start = start + len + 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}

int main()
{
	int i;
	char **array;
	
	array = ft_split("salut la compagnie !", ' ');
 	while(i <  4)
		printf("%s", array[i]);
}