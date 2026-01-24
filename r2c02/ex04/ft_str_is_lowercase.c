/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:30:08 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 18:35:51 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

//int	main(void)
//{
//	int	result;
//
//	result = ft_str_is_lowercase("qwifb");
//	printf("%i\n", result);
//}

int	ft_str_is_lowercase(char *str)
{
	int	is_lower_alpha;
	int	c;

	is_lower_alpha = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			is_lower_alpha = 1;
		else
		{
			is_lower_alpha = 0;
			return (0);
		}
		c++;
	}
	if (c == 0)
		is_lower_alpha = 1;
	return (is_lower_alpha);
}
