/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 12:59:15 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-26 12:59:15 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	inter_a;
	int	inter_b;

	inter_a = *a;
	inter_b = *b;
	*a = inter_b;
	*b = inter_a;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//
//	#include <stdio.h>
//	a = 10;
//	b = 20;
//	printf("\n%i", a);
//	printf("\n%i", b);
//	ft_swap(&a, &b);
//	printf("\n\n%i", a);
//	printf("\n%i", b);
//}
