/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:48:41 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/16 20:04:50 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 4;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_ultimate_div_mod(ptra, ptrb);
	printf("a: %d, b: %d", a, b);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	mod_result;

	mod_result = *a % *b;
	div_result = *a / *b;
	*a = div_result;
	*b = mod_result;
}
