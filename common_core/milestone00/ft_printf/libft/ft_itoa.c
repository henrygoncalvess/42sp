/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-17 13:11:51 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-17 13:11:51 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static long	number_len(long n);

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		num_len;

	nbr = n;
	num_len = number_len(nbr);
	str = malloc((num_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[num_len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	while (nbr > 0)
	{
		num_len--;
		str[num_len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

static long	number_len(long n)
{
	long	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(9));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(-9));
// 	printf("%s\n", ft_itoa(-99));
// 	printf("%s\n", ft_itoa(999));
// 	// return (0);
// }