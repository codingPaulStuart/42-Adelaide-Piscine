/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:48:08 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/17 10:09:18 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start;
	char	end;

	start = 'z';
	end = 'a';
	while (start >= end)
	{
		write(1, &start, 1);
		start--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
