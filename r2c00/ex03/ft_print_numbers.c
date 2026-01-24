/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:12:32 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/15 17:32:25 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

//int	main(void)
//{
//	ft_print_numbers();
//}

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
