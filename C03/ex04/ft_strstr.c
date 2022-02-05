/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:50:18 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/28 13:50:33 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count1;
	int	count2;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	count1 = 0;
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (to_find[count2] != '\0')
		{
			if (str[count1 + count2] == to_find[count2])
			{
				count2++;
			}
			else
				break ;
		}
		if (to_find[count2] == '\0')
			return (str + count1);
		count1++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*find_char;
	char	*find_char2;
	char	*find_char3;
	char	*string;

	string = "Hello";

	find_char = " ";
	find_char2 = "o";
	find_char3 = "e";

	printf("%s\n\tSearch for ' ' in Hello: ", ft_strstr(string, find_char));
	printf("%s\n\tSearch for 'o' in Hello: ", ft_strstr(string, find_char2));
	printf("%s\n\tSearch for 'e' in Hello: ", ft_strstr(string, find_char3));

	return (0);
}
*/
