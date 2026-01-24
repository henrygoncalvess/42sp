/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:37:03 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 18:40:43 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

//int	main(void)
//{
//	int	result;
//
//	result = ft_str_is_uppercase("QWFB");
//	printf("%i\n", result);
//}

int	ft_str_is_uppercase(char *str)
{
	int	is_upper_alpha;
	int	c;

	is_upper_alpha = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			is_upper_alpha = 1;
		else
		{
			is_upper_alpha = 0;
			return (0);
		}
		c++;
	}
	if (c == 0)
		is_upper_alpha = 1;
	return (is_upper_alpha);
}
