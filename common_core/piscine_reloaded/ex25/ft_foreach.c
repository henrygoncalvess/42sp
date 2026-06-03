/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 12:59:22 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-26 12:59:22 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <unistd.h>
// void	ft_putnbr(int nb)
// {
// 	char c;

// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 		ft_putnbr(nb / 10);
// 	c = (nb % 10) + '0';
// 	write(1, &c, 1);
// }

// int main(void)
// {
//     int array[] = {1, 2, 3, 4, 5};

//     ft_foreach(array, 5, &ft_putnbr);
// }