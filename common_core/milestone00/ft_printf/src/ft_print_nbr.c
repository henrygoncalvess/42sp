/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 21:23:05 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-23 21:23:05 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n);

int	ft_print_nbr(int n)
{
	char	c;
	int		printed_chars;

	printed_chars = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		printed_chars += 11;
		return (printed_chars);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		printed_chars++;
	}
	if (n >= 10)
	{
		ft_print_nbr(n / 10);
		printed_chars++;
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (printed_chars);
}
