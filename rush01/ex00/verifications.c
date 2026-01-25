/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifications.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:22:06 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/25 17:31:03 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_number(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num && i != col)
		{
			return (0);
		}
		if (grid[i][col] == num && i != row)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_col_top(int grid[4][4], int col, int vision)
{
	int	max;
	int	total;
	int	i;

	max = 0;
	total = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			total++;
		}
		i++;
	}
	if (total == vision)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_col_bottom(int grid[4][4], int col, int vision)
{
	int	max;
	int	total;
	int	i;

	max = 0;
	total = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			total++;
		}
		i--;
	}
	if (total == vision)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_row_left(int grid[4][4], int row, int vision)
{
	int	max;
	int	total;
	int	i;

	max = 0;
	total = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			total++;
		}
		i++;
	}
	if (total == vision)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_row_right(int grid[4][4], int row, int vision)
{
	int	max;
	int	total;
	int	i;

	max = 0;
	total = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			total++;
		}
		i--;
	}
	if (total == vision)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
