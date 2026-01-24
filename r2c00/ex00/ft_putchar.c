/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:11:47 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/15 17:27:01 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

//int	main(void)
//{
//	ft_putchar('a');
//}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
