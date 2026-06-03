/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 14:17:32 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 14:17:32 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	result;

// 	result = ft_isalpha('a');
// 	printf("%i\n", result);
// }