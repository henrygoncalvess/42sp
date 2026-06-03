/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 09:35:12 by hegoncal          #+#    #+#             */
/*   Updated: 2026/05/20 09:39:16 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

//int	main(void)
//{
//	ft_is_negative(-1);
//	ft_is_negative(1);
//	ft_is_negative(0);
//}
//
//void ft_putchar(char c)
//{
//	#include <unistd.h>
//
//	write(1, &c, 1);
//}
