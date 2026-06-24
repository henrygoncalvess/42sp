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

int	ft_print_str(char *s);

int	ft_print_str(char *s)
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
	if (s[i] == '\0')
		printed_chars++;
	return (printed_chars);
}
