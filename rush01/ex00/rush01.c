/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:32:52 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/25 17:46:16 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	show_grid(int grid[4][4]);
void	set_grid(int grid[4][4]);
void	set_tips(char *str, int tips[4][4]);
void	ft_atoi(char *str, int numbers[16]);
int		recursion(int grid[4][4], int row, int col, int tips[4][4]);

int	rush(char *str)
{
	int	grid[4][4];
	int	tips[4][4];

	set_grid(grid);
	set_tips(str, tips);
	if (recursion(grid, 0, 0, tips) == 0)
		return (0);
	show_grid(grid);
	return (1);
}

void	set_tips(char *str, int tips[4][4])
{
	int	numbers[16];
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	ft_atoi(str, numbers);
	while (i < 4)
	{
		while (j < 4)
		{
			tips[i][j] = numbers[k];
			j++;
			k++;
		}
		j = 0;
		i++;
	}
}

void	ft_atoi(char *str, int numbers[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			numbers[j] = str[i] - '0';
			j++;
		}
		i++;
	}
}
