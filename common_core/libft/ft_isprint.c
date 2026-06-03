/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 14:59:05 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 14:59:05 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int result;

// 	result = ft_isprint(55);
// 	printf("%i\n", result);
// }