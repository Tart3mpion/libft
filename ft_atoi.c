/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:20:56 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/19 15:45:59 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	atoi(const char *str)
{
	int i;
	int nb;
	int sign;

	nb = 0;
	i = 0;
	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if(str[i] == '-')
		sign = -1;
	else if(str[i] == '+')
		sign = 1;
	while(ft_isdigit(str[i]) == 1)
			nb = nb * 10 + str[i++] - 48;
	}
	return(nb * sign);
}

			

	
		
	

		

