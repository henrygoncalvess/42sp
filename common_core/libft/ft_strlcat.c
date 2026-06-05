/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 13:50:21 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 13:50:21 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == dst_len)
		return (dst_len + src_len);
	while (src[i] != '\0' && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char my_dst[20] = "Hello ";
// 	char og_dst[20] = "Hello ";
// 	const char *src = "World!";
// 	size_t size = 10;

// 	size_t my_ret = ft_strlcat(my_dst, src, size);
// 	size_t og_ret = strlcat(og_dst, src, size);

// 	printf("--- Test: size = %zu ---\n", size);
// 	printf("[MY] Return: %zu | Result: '%s'\n", my_ret, my_dst);
// 	printf("[OG] Return: %zu | Result: '%s'\n", og_ret, og_dst);

// 	return (0);
// }
