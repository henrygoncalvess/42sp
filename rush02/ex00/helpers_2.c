/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaia-da <amaia-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:33:06 by amaia-da          #+#    #+#             */
/*   Updated: 2026/02/01 21:11:00 by amaia-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <fcntl.h>
#include <unistd.h>

int	count_last_line(char *file_name)
{
	int		fd;
	int		read_bytes;
	int		i;
	char	buffer[1024];
	char	last_char;

	last_char = '\n';
	fd = open(file_name, 0);
	read_bytes = read(fd, buffer, sizeof(buffer));
	while (read_bytes > 0)
	{
		i = 0;
		while (i < read_bytes)
		{
			last_char = buffer[i];
			i++;
		}
		read_bytes = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	if (last_char != '\n')
		return (1);
	return (0);
}

int	is_number_dict(char *str)
{
	int		i;
	int		found_trash;
	char	c_trash;

	c_trash = ' ';
	found_trash = 0;
	i = 0;
	while (str[i] != '\0' && str[i] != ':')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			found_trash = 1;
			c_trash = str[i];
		}
		if ((str[i] >= '0' && str[i] < '9') && found_trash)
			return (0);
		i++;
	}
	if (str[i] == ':' && c_trash != ' ')
		return (0);
	return (1);
}

int	is_valid_dict(char *file_name)
{
	int		fd;
	char	line[1024];
	int		amount_chars;
	int		i;

	fd = open(file_name, 0);
	if (fd == -1)
		return (0);
	amount_chars = read_line(fd, line, sizeof(line));
	i = 0;
	while (amount_chars > 0)
	{
		if (!is_number_dict(line))
			return (0);
		amount_chars = read_line(fd, line, sizeof(line));
		i++;
	}
	close (fd);
	return (1);
}

int	is_valid_entry(int argc, char *argv[])
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
