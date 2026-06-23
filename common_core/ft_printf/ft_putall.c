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

int	print_conversion(char c, char next, va_list *args);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

int	print_conversion(char c, char next, va_list *args)
{
	char	joker;

	joker = ' ';
	if (c == '%')
		joker = next;
	if (joker == 'c')
		return (ft_putchar((char)(va_arg(*args, int))));
	else if (joker == 's')
		return (ft_putstr((va_arg(*args, char *))));
	else if (joker == 'p')
		return (ft_putstr((va_arg(*args, char *))));
	else if (joker == 'd')
		return (ft_putstr((va_arg(*args, char *))));
	else if (joker == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (joker == 'u')
		return (ft_putstr((va_arg(*args, char *))));
	else if (joker == 'x')
		return (ft_putstr((va_arg(*args, char *))));
	else if (joker == 'X')
		return (ft_putstr((va_arg(*args, char *))));
	else if (joker == '%')
		return (ft_putstr((va_arg(*args, char *))));
	else
		return (ft_putchar(joker));
}

int	ft_putnbr(int n)
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
		ft_putnbr(n / 10);
		printed_chars++;
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (printed_chars);
}

int	ft_putstr(char *s)
{
	int	i;
	int	printed_chars;

	printed_chars = 0;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		printed_chars++;
		i++;
	}
	return (printed_chars);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}