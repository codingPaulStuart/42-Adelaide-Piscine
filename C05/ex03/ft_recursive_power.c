/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:42:09 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:52:55 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	index;

	index = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n\t 12 to the power of 2 is: %d", 
			ft_recursive_power(12, 2));
	return (0);
}
*/
