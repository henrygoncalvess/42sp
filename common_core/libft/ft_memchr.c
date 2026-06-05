/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-04 21:40:04 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-04 21:40:04 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
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