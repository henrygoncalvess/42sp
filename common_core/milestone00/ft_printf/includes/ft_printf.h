/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-23 17:51:13 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-23 17:51:13 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_print_conversion(char c, va_list *args);
int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_nbr(int n);

int	ft_atoi_base(char *str, char *base);
int	get_digit_value(char c, char *base);
int	convert_base(char *str, char *base);
int	calc_power(int base, int exponent);
int	is_valid(char *base);

#endif
