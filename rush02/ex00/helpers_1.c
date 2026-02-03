/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaia-da <amaia-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:33:06 by amaia-da          #+#    #+#             */
/*   Updated: 2026/02/01 13:52:08 by amaia-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <fcntl.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	read_line(int file, char *buffer, int limit_buffer)
{
	int		i;
	char	c;
	ssize_t	rb;

	i = 0;
	while (i < limit_buffer - 1)
	{
		rb = read(file, &c, 1);
		if (rb <= 0)
			break ;
		if (c == '\n')
			break ;
		buffer[i++] = c;
	}
	buffer[i] = '\0';
	return (i || rb > 0);
}

int	amount_line(char *file_name)
{
	int		file;
	int		read_bytes;
	int		amount_lines;
	int		i;
	char	buffer[4096];

	amount_lines = 0;
	file = open(file_name, O_RDONLY);
	read_bytes = read(file, buffer, sizeof(buffer));
	while (read_bytes > 0)
	{
		i = 0;
		while (i < read_bytes)
		{
			if (buffer[i] == '\n')
				amount_lines++;
			i++;
		}
		read_bytes = read(file, buffer, sizeof(buffer));
	}
	close(file);
	return (amount_lines);
}

int	is_valid(int argc, char **argv)
{
	if (argc > 3 || argc == 1)
		return (0);
	if (argc == 2)
	{
		if (!is_numeric(argv[1]))
			return (0);
		if (argv[1][0] == '\0')
			return (0);
	}
	if (argc == 3)
	{
		if (!is_numeric(argv[2]))
			return (0);
		if (argv[2][0] == '\0')
			return (0);
	}
	return (1);
}
