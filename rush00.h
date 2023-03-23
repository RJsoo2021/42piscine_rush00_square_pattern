/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:37:54 by rsoo              #+#    #+#             */
/*   Updated: 2023/03/15 16:37:54 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH00_H
# define RUSH00_H

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_atoi(const char *str);

int     ft_checkarg(int rushnum, int xcoor, int ycoor);

void    rush00(int x, int y);
void    rush01(int x, int y);
void    rush02(int x, int y);
void    rush03(int x, int y);
void    rush04(int x, int y);

#endif