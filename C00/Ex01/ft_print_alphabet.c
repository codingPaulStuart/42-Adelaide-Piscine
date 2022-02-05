/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:11:06 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/17 10:03:46 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first;
	char	last;

	first = 'a';
	last = 'z';
	while (first <= last)
	{
		write(1, &first, 1);
		first++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
