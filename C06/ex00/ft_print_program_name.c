/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:35:30 by pstuart           #+#    #+#             */
/*   Updated: 2022/02/01 10:47:56 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	argc = 0;
	while (argv[0][index])
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	ft_putchar('\n');
	return (0);
}
