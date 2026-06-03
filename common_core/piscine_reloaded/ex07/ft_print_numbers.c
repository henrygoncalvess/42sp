/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 09:30:46 by hegoncal          #+#    #+#             */
/*   Updated: 2026/05/20 09:33:46 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar('0' + i);
		i++;
	}
}

//int	main(void)
//{
//	ft_print_numbers();
//}
//
//void ft_putchar(char c)
//{
//	#include <unistd.h>
//
//	write(1, &c, 1);
//}
