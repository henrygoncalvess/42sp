/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:31:10 by dlandi            #+#    #+#             */
/*   Updated: 2026/01/18 15:54:00 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == 1))
				ft_putchar('A');
			else if ((row == y && col == x) || (row == 1 && col == x))
				ft_putchar('C');
			else if ((col == 1 || col == x) || (row == 1 || row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
