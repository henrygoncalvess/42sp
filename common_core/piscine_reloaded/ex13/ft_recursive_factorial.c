/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:20:30 by hegoncal          #+#    #+#             */
/*   Updated: 2026/05/20 17:22:47 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// #include <stdio.h>
// printf("%i\n", ft_recursive_factorial(6));
// printf("%i\n", ft_recursive_factorial(5));
// printf("%i\n", ft_recursive_factorial(2));
// printf("%i\n", ft_recursive_factorial(1));
// printf("%i\n", ft_recursive_factorial(0));
// printf("%i\n", ft_recursive_factorial(-3));
// }
