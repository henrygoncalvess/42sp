/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:02:27 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/03 16:14:02 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <stdio.h>

int	check_header(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if (!(str[0] >= '0' && str[0] <= '9'))
			print_error("map error\n", 1);
		i++;
	}
	return (i);
}
