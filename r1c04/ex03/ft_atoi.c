/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:20:38 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/29 19:20:38 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

// int	main(void)
// {
// 	int	result;

// 	#include <stdio.h>
// 	result = ft_atoi(" ---+--+1234ab567");
// 	printf("result: %i\n", result);
// }

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	n;

	sign = 1;
	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '+' || str[i] == '-'
				|| str[i] == ' '))
		{
			if (str[i] == '-')
				sign *= -1;
			if (str[i] >= '0' && str[i] <= '9')
				n = n * 10 + (str[i] - '0');
		}
		else
			return (n * sign);
		i++;
	}
	return (n * sign);
}
