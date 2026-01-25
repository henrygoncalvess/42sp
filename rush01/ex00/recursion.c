/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:05:27 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/01/25 17:30:50 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid_number(int grid[4][4], int row, int col, int num);
int		check_col_top(int grid[4][4], int col, int vision);
int		check_col_bottom(int grid[4][4], int col, int vision);
int		check_row_left(int grid[4][4], int row, int vision);
int		check_row_right(int grid[4][4], int row, int vision);
void	define_next(int *n_row, int *n_col, int row, int col);

int	is_safe(int grid[4][4], int row, int col, int tips[4][4])
{
	int	pos;

	pos = grid[row][col];
	if (!valid_number(grid, row, col, pos))
	{
		return (0);
	}
	if (row == 3)
	{
		if (!check_col_top(grid, col, tips[0][col]) || !check_col_bottom(grid,
				col, tips[1][col]))
			return (0);
	}
	if (col == 3)
	{
		if (!check_row_left(grid, row, tips[2][row]) || !check_row_right(grid,
				row, tips[3][row]))
			return (0);
	}
	return (1);
}

void	define_next(int *n_row, int *n_col, int row, int col)
{
	if (col == 3)
	{
		*n_row = row + 1;
		*n_col = 0;
	}
	else
	{
		*n_row = row;
		*n_col = col + 1;
	}
}

int	recursion(int grid[4][4], int row, int col, int tips[4][4])
{
	int	i;
	int	next_row;
	int	next_col;

	if (row == 4)
		return (1);
	define_next(&next_row, &next_col, row, col);
	if (grid[row][col] != 0)
		return (recursion(grid, next_row, next_col, tips));
	i = 1;
	while (i <= 4)
	{
		grid[row][col] = i;
		if (is_safe(grid, row, col, tips))
		{
			if (recursion(grid, next_row, next_col, tips))
				return (1);
		}
		grid[row][col] = 0;
		i++;
	}
	return (0);
}
