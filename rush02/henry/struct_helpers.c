/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 07:24:39 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/01 15:18:20 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "stdio.h"

void	set_dicts(char *str, t_dict *dicts)
{
	(void)dicts;
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (str[i])
	{
		printf("line: ");
		i += get_number(&str[i], &dicts[d]);
		while (str[i] == ' ' || str[i] == ':')
			i++;
		i += get_name(&str[i], &dicts[d]);
		while (str[i] == '\n')
			i++;
		printf("\nnewline\n");
		d++;
	}
}

int get_number(char *str, t_dict *dict)
{
	int len;
	int i;

	len = 0;
	while(str[len] && (str[len] >= '0' && str[len] <= '9'))
		len++;

	dict->number = malloc(sizeof(char) * (len + 1));
	if (!dict->number)
		return (0);
	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		dict->number[i] = str[i];
		i++;
	}
	dict->number[i] = '\0';
	return (i);
}

int get_name(char *str, t_dict *dict)
{
	int len;
	int i;

	len = 0;
	while(str[len] && (str[len] >= '0' && str[len] <= '9'))
		len++;

	dict->name = malloc(sizeof(char) * (len + 1));
	if (!dict->name)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n' && str[i] != ' ')
	{
		dict->name[i] = str[i];
		i++;
	}
	dict->name[i] = '\0';
	return (i);
}
