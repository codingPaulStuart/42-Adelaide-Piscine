/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:03:48 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/31 15:53:51 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index -2) + ft_fibonacci(index - 1));
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("\n\t Fibonacci Seq using 8: %d", ft_fibonacci(8));
	printf("\n\t Fibonacci Seq using 9: %d", ft_fibonacci(9));
	printf("\n\t Fibonacci Seq using 10: %d", ft_fibonacci(10));
	printf("\n\t Fibonacci Seq using 11: %d", ft_fibonacci(11));
	printf("\n\t Fibonacci Seq using 12: %d", ft_fibonacci(12));
	printf("\n\t Fibonacci Seq using 13: %d", ft_fibonacci(13));
	printf("\n\t Fibonacci Seq using 14: %d", ft_fibonacci(14));
	return (0);
}
*/
