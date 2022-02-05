/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:54:40 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/29 17:27:16 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str)
{
	int	total;

	total = 0;
	while (str[total] != '\0')
	{
		total++;
	}
	return (total);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test = "this is a really long string!!!";
	printf("\n\t test string: %s", test);
	printf("\n\t total number: %d", ft_strlen(test));
	return (0);
}
*/
