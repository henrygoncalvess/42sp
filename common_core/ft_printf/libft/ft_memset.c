/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 16:38:52 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/22 17:41:44 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

// DESCRIPTION
// The memset() function fills the first n bytes of the memory area pointed to
// by s with the constant byte c.

// RETURN VALUE
// The memset() function returns a pointer to the memory area s.

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp_s[i] = (unsigned char)c;
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
