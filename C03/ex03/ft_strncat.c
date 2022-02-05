/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:32:04 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/29 16:05:02 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (count2 < nb && src[count2])
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char	*string1;
	char	*string2;
	
	char	string3[30] = "Hello ";
	char	string4[30] = "Hellos to all ";

	unsigned int var = 4;
	unsigned int var2 = 8;

	string1 = ft_strncat(string3, "World", var);
	string2 = ft_strncat(string4, "in the world", var2);
	
	printf("%s\n", string1);
	printf("%s\n", string2);
	
	return (0);
}
*/
