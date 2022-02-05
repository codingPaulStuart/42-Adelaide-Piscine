/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:29:03 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/26 16:41:17 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int     ft_str_is_printable(char *str);

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	char	*ptr3;
	int	result;
	int	result2;
	int	result3;

	ptr = "!";

	ptr2 = "`";

	ptr3 = "€";
	result = ft_str_is_printable(ptr);
	result2 = ft_str_is_printable(ptr2);
	result3 = ft_str_is_printable(ptr3);
	printf("\n\t The character '!' is printable: %d", result);
	printf("\n\t The character '`' is printable: %d", result2);
	printf("\n\t The character '€' is printable: %d", result3);
	return (0);
}
*/
int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 127)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
