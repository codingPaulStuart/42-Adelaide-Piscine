/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:59:20 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/24 18:18:44 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[] = "Source string.";
	char	destination[] = "Destination string.";
	unsigned int	un;

	un = 6;

	printf("BEFORE\n\tsource: %s\n\tdestination: %s\n", source, destination);
	ft_strncpy(destination, source, un);
	printf("BEFORE\n\tsource: %s\n\tdestination: %s\n", source, destination);
	return (0);

}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	var;

	var = 0;
	while ((src[var] != '\0') && (var < n))
	{
		dest[var] = src[var];
		var++;
	}
	while (var < n)
	{
		dest[var] = '\0';
		var++;
	}
	return (dest);
}
