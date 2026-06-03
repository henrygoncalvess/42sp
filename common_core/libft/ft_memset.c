/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 16:38:52 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 16:38:52 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_tmp;

	s_tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_tmp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char text[30] = "hello memset!";
// 	char ft_text[30] = "hello ft_memset!";

// 	memset(text, '*', 4);
// 	ft_memset(ft_text, '*', 4);

// 	printf("%s\n", text);
// 	printf("%s\n", ft_text);
// }