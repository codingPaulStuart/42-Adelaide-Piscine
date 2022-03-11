/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:22:48 by pstuart           #+#    #+#             */
/*   Updated: 2022/01/25 11:20:17 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int a;
	int	b;
	int	divide;
	int modulate;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &divide, &modulate);
	printf("\n\t The Value of a = %d",a);
	printf("\n\t The Value of b = %d",b);
	printf("\n\t Divide a and b = %d",divide);
	printf("\n\t Modulate a and b = %d",modulate);

}
*/
