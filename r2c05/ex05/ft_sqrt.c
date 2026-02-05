/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:13:11 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/04 21:27:33 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while ((result * result) != nb)
	{
		if ((result * result) > nb)
			return (0);
		result++;
	}
	return (result);
}

// int main(void)
//{
//	#include <stdio.h>
//	printf("%i\n", ft_sqrt(25));
//	// 4:2  9:3  16:4  25:5  36:6  49:7  169:13  289:17
//}
