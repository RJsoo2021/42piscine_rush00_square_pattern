/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorhandling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:00:12 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/23 12:00:12 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

int ft_checkarg(int rushnum, int xcoor, int ycoor)
{
    if ((rushnum < 0 || rushnum > 4) || xcoor < 0 || ycoor < 0)
    {
        if (rushnum < 0 || rushnum > 4)
            ft_putstr("Argument 1 (rushnum) error: Enter an int (0, 1, 2, 3, 4)");
        if (xcoor < 0)
            ft_putstr("Argument 2 (xcoor) error: Enter an positive int (0 - 2147483647) inclusive");
        if (ycoor < 0)
            ft_putstr("Argument 3 (ycoor) error: Enter an positive int (0 - 2147483647) inclusive");
        return (0);
    }
    return (1);
}