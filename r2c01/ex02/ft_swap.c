/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:48:41 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/16 19:57:55 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);

/*
int	main(void)
{
	int	var1;
	int	var2;
	int	*ptr1;
	int	*ptr2;

	var1 = 2;
	var2 = 8;
	ptr1 = &var1;
	ptr2 = &var2;
	printf("a: %d, b: %d\n", var1, var2);
	ft_swap(ptr1, ptr2);
	printf("a: %d, b: %d", var1, var2);
}
*/

void	ft_swap(int *a, int *b)
{
	int	intermediate1;
	int	intermediate2;

	intermediate1 = *b;
	intermediate2 = *a;
	*a = intermediate1;
	*b = intermediate2;
}
