/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-24 14:52:43 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-24 14:52:43 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	ft_print_conversion(char c, va_list *args);

int	ft_print_conversion(char c, va_list *args)
{
	if (c == 'c')
		return (ft_print_char((char)(va_arg(*args, int))));
	else if (c == 's')
		return (ft_print_str((va_arg(*args, char *))));
	else if (c == 'p')
		return (ft_print_str((va_arg(*args, void *))));
	else if (c == 'd')
		return (ft_print_str((va_arg(*args, char *))));
	else if (c == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_print_str((va_arg(*args, char *))));
	else if (c == 'x')
		return (ft_print_str((va_arg(*args, char *))));
	else if (c == 'X')
		return (ft_print_str((va_arg(*args, char *))));
	else if (c == '%')
		return (ft_print_str((va_arg(*args, char *))));
	else
		return (ft_print_char(c));
}
