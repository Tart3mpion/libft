/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:56:49 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/20 12:42:37 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void *str;
	
	i = 0;
	if(count == 0 || size == 0)
		return (NULL);
	str = malloc(size * count);
	while(i < count)
	{
		(char *)str[i] = 0;
		i++;
	}
	return (str);
}

