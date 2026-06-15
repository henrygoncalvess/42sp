/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-04 21:57:22 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-04 21:57:22 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

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
