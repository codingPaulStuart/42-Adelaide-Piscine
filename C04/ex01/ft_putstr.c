/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:36:33 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/29 17:40:58 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	*stringtest = "this is a string to print";
	ft_putstr(stringtest);
}
*/
