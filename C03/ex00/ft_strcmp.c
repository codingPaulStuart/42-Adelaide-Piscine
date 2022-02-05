/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:21:22 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/28 13:45:45 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char	*ptr = "test this string";
	char	*ptr2 = "test this string";
	char	*ptr3 = "test this other string";

	int	result1;
	int	result2;
	int	result3;

	result1 = ft_strcmp(ptr, ptr2);
	result2 = ft_strcmp(ptr3, ptr);
	result3 = ft_strcmp(ptr2, ptr3);

	printf("\n\t string 1 and string 2 compare result: %d", result1);
	printf("\n\t string 3 and string 1 compare result: %d", result2);
	printf("\n\t string 2 and string 3 compare result: %d", result3);

	return (0);
}
*/
