/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 19:02:05 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-23 19:02:05 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *format, ...);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed_chars;

	va_start(args, format);
	printed_chars = 0;
	i = 0;
	while (format[i] && format[i + 1] != '\0')
	{
		printed_chars += ft_print_conversion(format[i], format[i + 1], &args);
		i++;
	}
	va_end(args);
	return (printed_chars);
}

int	ft_print_conversion(char c, char next, va_list *args);
int	ft_printf_char(char c);
int	ft_printf_str(char *s);
int	ft_printf_nbr(int n);

int	ft_print_conversion(char c, char next, va_list *args)
{
	char	joker;

	joker = ' ';
	if (c == '%')
		joker = next;
	if (joker == 'c')
		return (ft_printf_char((char)(va_arg(*args, int))));
	else if (joker == 's')
		return (ft_printf_str((va_arg(*args, char *))));
	else if (joker == 'p')
		return (ft_printf_str((va_arg(*args, char *))));
	else if (joker == 'd')
		return (ft_printf_str((va_arg(*args, char *))));
	else if (joker == 'i')
		return (ft_printf_nbr(va_arg(*args, int)));
	else if (joker == 'u')
		return (ft_printf_str((va_arg(*args, char *))));
	else if (joker == 'x')
		return (ft_printf_str((va_arg(*args, char *))));
	else if (joker == 'X')
		return (ft_printf_str((va_arg(*args, char *))));
	else if (joker == '%')
		return (ft_printf_str((va_arg(*args, char *))));
	else
		return (ft_printf_char(joker));
}

int	ft_printf_nbr(int n)
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
		ft_printf_nbr(n / 10);
		printed_chars++;
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (printed_chars);
}

int	ft_printf_str(char *s)
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

// int	main(void)
// {
// 	ft_printf("%s, %i, %c", "test", 7, 'a');
// }