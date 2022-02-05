/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:14:12 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:50:00 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n\t Recursive Factorial Function for 11: %d", 
			ft_recursive_factorial(11));
	return (0);
}
*/
