/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:38:34 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/03 19:30:29 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i = 1;
	char	*str;
	(void)str;
	(void)argv;
	(void)argc;

	filenames = malloc(argc * sizeof(char));
	if (argc == 1)
		filenames[0] = "map1";
	check_header(filenames);
	for (int i = 0; i < 3; i++)
	{
		printf("%s", filename[i]);
	}
}
