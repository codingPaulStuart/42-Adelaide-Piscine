/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:57:02 by pstuart           #+#    #+#             */
/*   Updated: 2022/02/01 15:30:58 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	number;

	number = '9';
	while(number >= '0')
	{
		write(1, &number, 1);
		number--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
	return (0);
}
