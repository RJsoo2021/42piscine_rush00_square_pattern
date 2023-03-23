/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:37:20 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/15 16:37:20 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

int main(int ac, char **av)
{
    int rushnum;
    int xcoor;
    int ycoor;
    void (*rush[5]) (int, int) = {&rush00, &rush01, &rush02, &rush03, &rush04};
    if (ac == 4)
    {
        rushnum = ft_atoi(av[1]);
        xcoor = ft_atoi(av[2]);
        ycoor = ft_atoi(av[3]);
        if (ft_checkarg(rushnum, xcoor, ycoor))
            rush[rushnum](xcoor, ycoor);
    }
    else 
        ft_putstr("Argument count error: 3 arguments required");
    return (0);
}
