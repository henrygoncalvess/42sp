/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:45:44 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/01 19:45:45 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ignore_space(int *i, char *line)
{
	if (line[*i] == ' ')
	{
		while (line[*i] == ' ')
			*i = *i + 1;
	}
}

void	set_vars(char unit[], char tens[], char *str)
{
	tens[0] = str[0];
	tens[1] = '0';
	tens[2] = '\0';
	unit[0] = str[0];
	unit[1] = '\0';
}

void	check_zero(char *str, t_dict *dict, int size, int *count)
{
	int	len;

	len = ft_strlen(str);
	if (str[0] == '0' && len > 1)
		ft_print_3_digits(str + 1, dict, size, count);
}

void	populate_group(char current_group[4], int group_size, char *str,
		int *is_zero)
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		current_group[j] = 0;
		j++;
	}
	i = 0;
	while (i < group_size)
	{
		current_group[i] = str[i];
		if (str[i] != '0')
			*is_zero = 0;
		i++;
	}
}
