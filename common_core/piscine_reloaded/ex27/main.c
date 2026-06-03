/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 14:37:58 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-26 14:37:58 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	if (ft_display_file(argv[1]) == 1)
	{
		write(1, "File not found.\n", 16);
		return (1);
	}
}
