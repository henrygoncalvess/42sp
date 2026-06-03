/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 16:55:54 by hegoncal          #+#    #+#             */
/*   Updated: 2026/05/20 17:13:50 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	limit;
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	limit = nb;
	i = 1;
	while (i < limit)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}

// int	main(void)
// {
// #include <stdio.h>
// 	printf("%i\n", ft_iterative_factorial(5));
// 	printf("%i\n", ft_iterative_factorial(6));
// 	printf("%i\n", ft_iterative_factorial(2));
// 	printf("%i\n", ft_iterative_factorial(1));
// 	printf("%i\n", ft_iterative_factorial(0));
// 	printf("%i\n", ft_iterative_factorial(-1));
// }
