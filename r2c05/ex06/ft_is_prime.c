/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:29:12 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/05 16:27:05 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divider;
	int	count;
	int	i;

	if (nb == 0 || nb == 1)
		return (0);
	divider = 1;
	count = 0;
	i = 0;
	while (i < nb)
	{
		if (nb % divider == 0)
			count++;
		if (count >= 3)
			return (0);
		divider++;
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	printf("prime numbers: 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47\n");
// 	for (int i = 0; i < 50; i++)
// 	{
// 		if (i % 10 == 0)
// 			printf("\n");
// 		if (ft_is_prime(i) == 1)
// 			printf("✔ %i\t", i);
// 		else
// 			printf("✖ %i\t", i);
// 	}
// }
