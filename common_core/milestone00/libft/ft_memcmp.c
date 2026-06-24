/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 21:57:22 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/22 20:13:39 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

// DESCRIPTION
// The memcmp() function compares the first n bytes (each interpreted as
// unsigned char) of the memory areas s1 and s2.

// RETURN VALUE
// The  memcmp()  function  returns an integer less than, equal to, or greater
// than zero if the first n bytes of s1 is found, respectively, to be less than,
// to match, or be greater than the first n bytes of s2.

// For a nonzero return value, the sign is determined by the sign of the
// difference between the first pair of bytes (interpreted as unsigned char)
// that differ in s1 and s2.

// If n is zero, the return value is zero.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*space1;
	const unsigned char	*space2;
	size_t				i;

	if (n == 0)
		return (0);
	space1 = (const unsigned char *)s1;
	space2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (space1[i] != space2[i])
			return (space1[i] - space2[i]);
		i++;
	}
	return (0);
}
