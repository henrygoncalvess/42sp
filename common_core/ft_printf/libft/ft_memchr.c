/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 21:40:04 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/22 20:10:30 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

// DESCRIPTION
// The memchr() function scans the initial n bytes of the memory area pointed to
// by s for the first instance of c. Both c and the bytes of the memory area
// pointed to by s are interpreted as unsigned char.

// RETURN VALUE
// The memchr() function return a pointer to the matching byte or NULL if the
// character does not occur in the given memory area.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	tmp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == (unsigned char)c)
			return ((void *)&tmp_s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
//     const char str[] = "42 School";
//     int search_char = 'c';
//     size_t n = 6;

//     char *my_res = ft_memchr(str, search_char, n);
//     char *og_res = memchr(str, search_char, n);

//     printf("--- Test: Searching for '%c' (n = %zu) ---\n", search_char, n);

//     // Check MY result
//     if (my_res)
//         printf("[MY] Found: '%s'\n", my_res);
//     else
//         printf("[MY] Result: NULL\n");

//     // Check ORIGINAL result
//     if (og_res)
//         printf("[OG] Found: '%s'\n", og_res);
//     else
//         printf("[OG] Result: NULL\n");

//     return (0);
// }
