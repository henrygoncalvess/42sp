/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:09:09 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 17:10:42 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_erro(char *mensagem);
void	print_linha(int alt, int pos_linha);
void	print_coluna(int alt, int larg, int pos_linha, int pos_coluna);

void	rush(int x, int y)
{
	int		linha;
	int		coluna;

	linha = 1;
	coluna = 1;
	if (x > 0 && y > 0)
	{
		while (linha <= y)
		{
			print_linha(y, linha);
			while (coluna <= (x - 1))
			{
				print_coluna(y, (x - 1), linha, coluna);
				coluna++;
			}
			ft_putchar('\n');
			coluna = 1;
			linha++;
		}
	}
	else
	{
		print_erro("!ERRO! Altura e lagura devem ter ");
		print_erro("valores maiores do que 0.\n");
	}
}

void	print_coluna(int alt, int larg, int pos_linha, int pos_coluna)
{
	char	letra;

	if (pos_linha == 1 && pos_coluna == larg)
		letra = '\\';
	else if (pos_linha == alt && pos_coluna == larg)
		letra = '/';
	else if (pos_linha == 1 || pos_linha == alt || pos_coluna == larg)
		letra = '*';
	else
		letra = ' ';
	ft_putchar(letra);
}

void	print_linha(int alt, int pos_linha)
{
	char	letra;

	if (pos_linha == 1)
		letra = '/';
	else if (pos_linha == alt)
		letra = '\\';
	else
		letra = '*';
	ft_putchar(letra);
}

void	print_erro(char *mensagem)
{
	int	contador;

	contador = 0;
	while (mensagem[contador] != '\0')
	{
		ft_putchar(mensagem[contador]);
		contador++;
	}
}
