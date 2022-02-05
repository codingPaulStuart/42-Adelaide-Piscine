/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:41:15 by pstuart           #+#    #+#             */
/*   Updated: 2022/02/01 13:48:39 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	index1;
	int	index2;

	index1 = argc - 1;
	while (index1 > 0)
	{
		index2 = 0;
		while (argv[index1][index2])
		{
			ft_putchar(argv[index1][index2]);
			index2++;
		}
		ft_putchar('\n');
		index1--;
	}
	return (0);
}
