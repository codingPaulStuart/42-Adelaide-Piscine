/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:30:07 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:50:59 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count1;
	int	count2;

	count1 = 1;
	count2 = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (count1 < power)
	{
		count2 = count2 * nb;
		count1++;
	}
	return (count2);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result = ft_iterative_power(8,2);
	printf("\n\t 8 to the power of 2 = %d", result);
	return (0);
}
*/
