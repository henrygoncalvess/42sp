/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 09:06:46 by hegoncal          #+#    #+#             */
/*   Updated: 2026/05/20 09:23:09 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	i;

	i = 0;
	while (i < 26)
	{
		ft_putchar('a' + i);
		i++;
	}
}

//int	main(void)
//{
//	ft_print_alphabet();
//}
//
//void ft_putchar(char c)
//{
//	#include <unistd.h>
//
//	write(1, &c, 1);
//}
