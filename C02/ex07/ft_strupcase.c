/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:42:16 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/26 16:38:44 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	letters[] = "abcDefGhIJKLmnopqrStuVwxYz";
	char	*ptr;
	ptr = letters;

	printf("\n\t Current Char Array: %s", letters);
	printf("\n\t Char Array after the function: %s", ft_strupcase(ptr));
	return (0);
}
*/
char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
