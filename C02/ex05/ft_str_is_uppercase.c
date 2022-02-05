/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:50:51 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/26 16:40:29 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	char	*ptr3;
	int	result;
	int	result2;
	int	result3;

	ptr = "K";

	ptr2 = "k";

	ptr3 = "\0";
	result = ft_str_is_uppercase(ptr);
	result2 = ft_str_is_uppercase(ptr2);
	result3 = ft_str_is_uppercase(ptr3);
	printf("\n\t The character 'K' is uppercase: %d", result);
	printf("\n\t The character 'k' is uppercase: %d", result2);
	printf("\n\t The character ' ' is uppercase: %d", result3);
	return (0);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 90)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
