/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:50:04 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/29 21:56:13 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base);
int	get_digit_value(char c, char *base);
int	convert_base(char *str, char *base);
int	calc_power(int base, int exponent);
int	is_valid(char *base);

//int	main(void)
//{
//	#include <stdio.h>
//	printf("result: %i\n", ft_atoi_base("-+-+++-N47U",
//			"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"));
//}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	sign;
	int	i;

	if (!is_valid(base))
		return (0);
	sign = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	number = convert_base(str, base);
	if (number < 0)
		number = -number;
	return (number * sign);
}

int	is_valid(char *base)
{
	int	b_len;
	int	i;

	i = 1;
	b_len = 0;
	while (base[b_len])
	{
		if (base[b_len] == '-' || base[b_len] == '+' || base[b_len] == ' ')
			return (0);
		while (base[i])
		{
			if (base[i] == base[b_len])
				return (0);
			i++;
		}
		b_len++;
		i = b_len + 1;
	}
	if (b_len == 0)
		return (0);
	return (1);
}

int	convert_base(char *str, char *base)
{
	int	base_len;
	int	exponent;
	int	sum;
	int	i;

	exponent = 0;
	base_len = 0;
	sum = 0;
	i = 0;
	while (base[base_len])
		base_len++;
	while (str[exponent])
		exponent++;
	while (str[i])
	{
		if (!(str[i] == '-' || str[i] == '+' || str[i] == ' '))
			sum += (get_digit_value(str[i], base) * calc_power(base_len,
						exponent - 1));
		i++;
		exponent--;
	}
	return (sum);
}

int	get_digit_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	calc_power(int base, int exponent)
{
	int	power;
	int	i;

	power = 1;
	i = 0;
	while (i < exponent)
	{
		power *= base;
		i++;
	}
	return (power);
}
