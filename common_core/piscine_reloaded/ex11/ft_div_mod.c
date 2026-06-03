/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 16:50:03 by hegoncal          #+#    #+#             */
/*   Updated: 2026/05/20 16:54:28 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	div;
//	int	mod;
//
//#include <stdio.h>
//	div = 0;
//	mod = 0;
//	printf("div: %i\n", div);
//	printf("mod: %i\n", mod);
//	ft_div_mod(10, 2, &div, &mod);
//	printf("\ndiv: %i\n", div);
//	printf("mod: %i\n", mod);
//}
