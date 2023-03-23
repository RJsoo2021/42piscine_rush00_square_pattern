/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:30:31 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/16 11:30:31 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void    rush04(int x, int y)
{
    int l;
    int w;

    w = 1;
    if (x == 0)
        return ;
    while (w != y + 1)
    {
        l = 1;
        while (l != x + 1)
        {
            if ((l == 1 && w == 1) || (w == x && l == y))
                ft_putchar('A');
            else if ((l == 1 && w == y) || (w == 1 && l == x))
                ft_putchar('C');
            else if (w == y || w == 1 || l == x || l == 1)
                ft_putchar('B');
            else
                ft_putchar(' ');
            l++;
        }
        w++;
        ft_putchar('\n');
    }
}