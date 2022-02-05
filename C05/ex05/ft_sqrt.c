/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:53:25 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:55:39 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	index = 0;
	while (index <= nb / 2 && index <= 46341)
	{
		if (index * index == nb)
		{
			return (index);
		}
		index++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n\t Square Root of 4: %d", ft_sqrt(4));
	printf("\n\t Square Root of 36: %d", ft_sqrt(36));
	printf("\n\t Square Root of 9: %d", ft_sqrt(9));
	printf("\n\t Square Root of 25: %d", ft_sqrt(25));
	printf("\n\t Square Root of 144: %d", ft_sqrt(144));
	return (0);
}
*/
