/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:23:40 by pstuart           #+#    #+#             */
/*   Updated: 2022/02/01 16:23:44 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int index;
    index = 0;
    if (argc > 1)
    {
        while(argv[1][index])
        {
            write(1, &argv[1][index++], 1);
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);    
}