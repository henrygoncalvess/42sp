/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:42:25 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 18:50:59 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

//int	main(void)
//{
//	int	result;
//
//	result = ft_str_is_printable("aA12~`!@#$%^&*()_+-=[]{}|:;'<>,./?");
//	printf("%i\n", result);
//}

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	c;

	is_printable = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 32 && str[c] <= 126)
			is_printable = 1;
		else
		{
			is_printable = 0;
			return (0);
		}
		c++;
	}
	if (c == 0)
		is_printable = 1;
	return (is_printable);
}
