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
		if (format[i] == '%')
			i++;
		printed_chars += ft_print_conversion(format[i], &args);
		i++;
	}
	va_end(args);
	return (printed_chars);
}

#include <stdio.h>

int	main(void)
{
	printf("OG_PRINTF:\n");
	printf("OG_RESULT: %i\n", printf("-%c---\n%s\n", 'A', "TESTE"));

	ft_printf("MY_PRINTF:\n");
	ft_printf("-%c---\n%s\n", 'A', "TESTE");
}