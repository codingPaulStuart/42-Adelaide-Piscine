/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:28:11 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/24 18:26:55 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int     ft_str_is_numeric(char *str);

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	char	*ptr3;
	int	result;
	int	result2;
	int	result3;

	ptr = "4";

	ptr2 = "E";

	ptr3 = "\0";
	result = ft_str_is_numeric(ptr);
	result2 = ft_str_is_numeric(ptr2);
	result3 = ft_str_is_numeric(ptr3);
	printf("\n\tThe Character '4' is numeric: %d", result);
	printf("\n\tThe Character 'E' is numeric: %d", result2);
	printf("\n\tThe Character ' ' is a numeric: %d", result3);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
