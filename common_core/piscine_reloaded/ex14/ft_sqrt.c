/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:57:48 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-24 18:57:48 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if (i == nb)
			break ;
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     #include <stdio.h>
//     printf("%i\n", ft_sqrt(25));
//     printf("%i\n", ft_sqrt(26));
// }