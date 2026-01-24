/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojesus- <rojesus-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:05:20 by rojesus-          #+#    #+#             */
/*   Updated: 2026/01/18 17:03:46 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

void	comefim(int larg, int con)
{
	if (larg == con || con == 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	linha(int comeio, int largura)
{
	int	con;

	con = 1;
	while (con <= largura)
	{
		if (comeio == 1)
		{	
			comefim(largura, con);
		}
		else
		{
			if (con == 1 || (con == largura && comeio == 0))
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		con++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	col;

	col = 1;
	while (col <= y)
	{
		if (col == 1 || col == y)
		{
			linha(1, x);
		}
		else
		{
			linha(0, x);
		}
		col++;
	}
}
