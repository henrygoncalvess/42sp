/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:36:47 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/24 22:16:22 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		mini_atoi(char c);
void	print_msg(char *msg);
void	print_num(int num);
void	set_grid(int grid[4][4]);
void	show_grid(int grid[4][4]);

void	print_num(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

int	mini_atoi(char c)
{
	return (c - '0');
}

void	print_msg(char *msg)
{
	int	index;

	index = 0;
	while (msg[index] != '\0')
	{
		write(1, &msg[index], 1);
		index++;
	}
}

void	set_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	show_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			print_num(grid[i][j]);
			if (j != 3)
				print_msg(" ");
			j++;
		}
		print_msg("\n");
		j = 0;
		i++;
	}
}
