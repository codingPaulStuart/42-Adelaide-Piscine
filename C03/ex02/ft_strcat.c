/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:56:47 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/29 13:41:00 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
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
#include <string.h>

int	main(void)
{
	char *a;
 	char *b;
 	char c[30] = "Hello ";
 	char d[30] = "Hellos to all in the  ";

 	a = ft_strcat(c,"World");
 	b = strcat(d,"worlds");

 	printf("%s\n",a);
 	printf("%s\n",b);
	return (0);
}
*/
