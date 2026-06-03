/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 14:04:38 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-26 14:04:38 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <fcntl.h>
#include <unistd.h>

int	ft_display_file(char *file_name)
{
	int		fd;
	int		read_bytes;
	char	buffer[1024];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (1);
	read_bytes = read(fd, buffer, sizeof(buffer));
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (0);
}
