/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-04 23:57:45 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-04 23:57:45 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	big_pos;
	size_t	little_pos;

	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	if (little_len == 0)
		return ((char *)big);
	big_pos = 0;
	while (big_pos < len)
	{
		little_pos = 0;
		while (big[big_pos + little_pos] == little[little_pos] && (big_pos
				+ little_pos) < len)
		{
			little_pos++;
			if (little[little_pos] == '\0')
				return ((char *)&big[big_pos]);
		}
		big_pos++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("og result: %s\n", strnstr("lorem ipsum dolor sit amet", "dolor",
// 				15));
// 	printf("my result: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor",
// 				15));
// }