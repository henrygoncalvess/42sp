/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 02:56:31 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/01 14:54:31 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "header.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		lines_num;
	t_dict	*dicts;

	(void)argc;
	(void)argv;
	str = file_to_str("numbers.dict");
	lines_num = lines_number(str);
	dicts = malloc(sizeof(t_dict) * lines_num);
	set_dicts(str, dicts);
	for (int i = 0; i < lines_num; i++)
	{
		printf("dnum[%i]: %s\n", i, dicts[i].number);
		printf("dnam[%i]: %s\n", i, dicts[i].name);
		printf("\n");
	}
	printf("ln: %i\n", lines_num);
	free(dicts);
	free(str);
	return (0);
}

int	lines_number(char *str)
{
	int	lines_num;
	int	i;

	lines_num = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			lines_num++;
		i++;
	}
	return (lines_num);
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
		read_bytes = read(fd, buffer, 49);
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
