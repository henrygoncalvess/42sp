/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:37:24 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/01 17:37:25 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_dict	line_2_dict(char *line)
{
	t_dict	dict;
	int		i;
	int		j;

	i = 0;
	while (line[i] != ':' && line[i] != ' ' && line[i] != '\0')
	{
		dict.number[i] = line[i];
		i++;
	}
	dict.number[i] = '\0';
	ignore_space(&i, line);
	if (line[i] == ':')
		i++;
	ignore_space(&i, line);
	j = 0;
	while (line[i] != '\0')
	{
		dict.name[j] = line[i];
		i++;
		j++;
	}
	dict.name[j] = '\0';
	remove_final_spcs(dict.name);
	return (dict);
}

void	parse_dict(t_dict *dict_arr, char *file_name)
{
	int		fd;
	char	line[1024];
	int		amount_chars;
	int		i;

	fd = open(file_name, 0);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		return ;
	}
	amount_chars = read_line(fd, line, sizeof(line));
	i = 0;
	while (amount_chars > 0)
	{
		dict_arr[i] = line_2_dict(line);
		amount_chars = read_line(fd, line, sizeof(line));
		i++;
	}
	close(fd);
}

void	print_from_dict(char *n, t_dict *dict, int dict_size, int *count)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		if (ft_strcmp(n, dict[i].number) == 0)
		{
			if (*count == 1)
			{
				write(2, " ", 1);
			}
			write(2, dict[i].name, ft_strlen(dict[i].name));
			*count = 1;
			return ;
		}
		i++;
	}
}

void	remove_final_spcs(char *str)
{
	int	end;

	end = 0;
	while (str[end] != '\0')
	{
		end++;
	}
	end--;
	while (end >= 0 && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'
			|| str[end] == '\r'))
	{
		str[end] = '\0';
		end--;
	}
}
