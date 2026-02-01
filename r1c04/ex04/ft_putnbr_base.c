/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:01:47 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/29 16:42:05 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		is_duplicated(char *str);
int		is_signed(char *base, int *base_len);
void	set_arr(int arr[96]);

// int	main(void)
// {
// 	#include <stdio.h>
// 	ft_putnbr_base(21474836, "0123456789ABCDEFGHIJKLMNOPQRSTUV");
// }

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (is_duplicated(base) || is_signed(base, &base_len) || base_len <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}

int	is_duplicated(char *str)
{
	int	frequency[96];
	int	pos_char;
	int	i;

	i = 0;
	set_arr(frequency);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			pos_char = str[i] - 32;
			frequency[pos_char] += 1;
			if (frequency[pos_char] > 1)
				return (1);
		}
		i++;
	}
	return (0);
}

int	is_signed(char *base, int *base_len)
{
	while (base[*base_len])
	{
		if (base[*base_len] == '-' || base[*base_len] == '+')
			return (1);
		*base_len += 1;
	}
	return (0);
}

void	set_arr(int arr[96])
{
	int	i;

	i = 0;
	while (i < 96)
	{
		arr[i] = 0;
		i++;
	}
}
