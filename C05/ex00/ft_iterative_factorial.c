/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:33:02 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:49:08 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;

	index = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (index > 1)
	{
		nb = nb * (index - 1);
		index--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n\t Iterative Factorial of 11: %d",
			ft_iterative_factorial(11));
	return (0);
}
*/
