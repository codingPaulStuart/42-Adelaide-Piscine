/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:33:54 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/29 13:36:35 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	count;

	count = 0;
	while ((s1[count] || s2[count]) && (count < n))
	{
		if (s1[count] < s2[count])
		{
			return (-1);
		}
		else if (s1[count] > s2[count])
		{
			return (1);
		}
		count++;
	}
	return (0);
}
