/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:31:19 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:44:50 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	while (nb % index != 0)
	{
		if (index > nb)
		{
			break ;
		}
		index++;
	}
	if (nb == index)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n\t check 13 is a prime number: %d", ft_is_prime(13));
	printf("\n\t check 61 is a prime number: %d", ft_is_prime(61));
	printf("\n\t check 73 is a prime number: %d", ft_is_prime(73));
	printf("\n\t check 20 is a prime number: %d", ft_is_prime(20));
	printf("\n\t check 45 is a prime number: %d", ft_is_prime(45));
	return (0);
}
*/
