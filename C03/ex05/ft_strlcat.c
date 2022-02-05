/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:41:45 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/28 13:43:19 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index1;
	unsigned int	index2;

	index1 = 0;
	index2 = 0;
	while (dest[index2] != '\0')
	{
		index2++;
	}
	while (src[index1] != '\0')
	{
		if (index2 < size -1)
		{
			dest[index2] = src[index1];
		}
		index2++;
		index1++;
	}
	dest[index2 -1] = '\0';
	return (index2);
}
