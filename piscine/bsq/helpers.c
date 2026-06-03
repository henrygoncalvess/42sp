/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:45:27 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/03 16:11:51 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>
#include <unistd.h>

void	print_error(char *str, int status)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	exit(status);
}

char	*file_to_str(char *filename)
{
	int		fd;
	int		file_size;
	char	*content;
	char	buffer[4096];
	ssize_t	read_bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_bytes = read(fd, buffer, sizeof(buffer));
	file_size = 0;
	while (read_bytes > 0)
	{
		file_size += read_bytes;
		read_bytes = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	content = malloc(sizeof(char) * (file_size + 1));
	if (!content)
		return (0);
	fd = open(filename, O_RDONLY);
	read(fd, content, file_size);
	close(fd);
	content[file_size] = '\0';
	return (content);
}
