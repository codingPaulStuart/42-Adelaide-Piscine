/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:29:23 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/26 16:39:58 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int     ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	char	*ptr3;
	int	result;
	int	result2;
	int	result3;

	ptr = "e";

	ptr2 = "E";

	ptr3 = "\0";
	result = ft_str_is_lowercase(ptr);
	result2 = ft_str_is_lowercase(ptr2);
	result3 = ft_str_is_lowercase(ptr3);
	printf("\n\tThe Character 'e' is lowercase: %d", result);
	printf("\n\tThe Character 'E' is lowercae: %d", result2);
	printf("\n\tThe Character ' ' is lowercase: %d", result3);
	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 97 || str[count] > 122)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
