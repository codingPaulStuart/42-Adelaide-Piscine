/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:37:26 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/26 16:37:41 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	char	*ptr3;
	int	result;
	int	result2;
	int	result3;

	ptr = "g";

	ptr2 = "3";

	ptr3 = "\0";
	result = ft_str_is_alpha(ptr);
	result2 = ft_str_is_alpha(ptr2);
	result3 = ft_str_is_alpha(ptr3);
	printf("\nThe Character 'a' is an alpha: %d ", result);
	printf("\nThe Character '3' is an alpha: %d ", result2);
	printf("\nThe Character ' ' is an alpha: %d ", result3);
	return (0);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
