/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:08:17 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 18:19:34 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

//int	main(void)
//{
//	int	result;
//
//	result = ft_str_is_alpha("");
//	printf("%i\n", result);
//}

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	c;

	is_alpha = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			is_alpha = 1;
		else if (str[c] >= 'a' && str[c] <= 'z')
			is_alpha = 1;
		else
		{
			is_alpha = 0;
			return (0);
		}
		c++;
	}
	if (c == 0)
		is_alpha = 1;
	return (is_alpha);
}
