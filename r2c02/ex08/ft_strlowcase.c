/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:50:50 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/19 15:53:21 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

//int	main(void)
//{
//	char	string[20] = "o felipe NAO existe";
//	char	*result;
//
//	result = ft_strlowcase(string);
//	printf("%s", result);
//}

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] += ('a' - 'A');
		c++;
	}
	return (str);
}
