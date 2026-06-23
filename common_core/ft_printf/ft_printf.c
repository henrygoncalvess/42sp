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
		printed_chars += print_conversion(format[i], format[i + 1], &args);
		i++;
	}
	va_end(args);
	return (printed_chars);
}

// int	main(void)
// {
// 	ft_printf("%s, %i, %c", "test", 7, 'a');
// }