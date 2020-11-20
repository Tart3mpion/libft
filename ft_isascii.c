/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 21:37:53 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/18 21:37:55 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int ft_iscacii(int c)
{
	return( c >= 0 && c <= 127);
}
