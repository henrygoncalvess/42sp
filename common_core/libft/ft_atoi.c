/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 20:45:54 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 20:45:54 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nptr);

int	ft_atoi(char *nptr)
{
	int	sign;
	int	limit;
	int	i;
	int	n;

	limit = 0;
	sign = 1;
	i = 0;
	n = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	while ((nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign *= (-1);
		i++;
		limit++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		n = n * 10 + (nptr[i++] - '0');
	if (limit > 1)
		return (0);
	return (n * sign);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i\n", ft_atoi("+-54"));
// }