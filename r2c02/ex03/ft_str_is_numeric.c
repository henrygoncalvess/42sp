/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:08:17 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 18:28:49 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

//int	main(void)
//{
//	int	result;
//
//	result = ft_str_is_numeric("91273");
//	printf("%i\n", result);
//}

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	c;

	is_numeric = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= '0' && str[c] <= '9')
			is_numeric = 1;
		else
		{
			is_numeric = 0;
			return (0);
		}
		c++;
	}
	if (c == 0)
		is_numeric = 1;
	return (is_numeric);
}
