/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:55:26 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/24 18:16:47 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsource: %s\n\tdestination: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsource: %s\n\tdestination: %s\n", source, dest);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
