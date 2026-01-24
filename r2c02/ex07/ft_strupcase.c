/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:51:55 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/18 19:45:09 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

//int	main(void)
//{
//	char	string[20] = "O Felipe nao existe";
//	char	*result;
//
//	result = ft_strupcase(string);
//	printf("%s", result);
//}

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= ('a' - 'A');
		c++;
	}
	return (str);
}
