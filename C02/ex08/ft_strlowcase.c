/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:19:06 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/24 18:50:18 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char    letters[] = "abcDefGhIJKLmnopqrStuVwxYz";
	char	*ptr;
	ptr = letters;

	printf("\n\t Current Char Array: %s", letters);
	printf("\n\t Char Array after the function: %s", ft_strlowcase(ptr));
	return (0);
}
*/
char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
