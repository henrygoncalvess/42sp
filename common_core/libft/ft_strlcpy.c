/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:40:53 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/22 19:38:25 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

// DESCRIPTION
// The strlcpy() function copy strings. strlcpy() take the full size of the
// buffer (not just the length) and guarantee to NUL-terminate the result
// (as long as size is larger than 0). Note that a byte for the NUL should
// be included in size. strlcpy() and strlcat() only operate on true "C"
// strings. This means that for strlcpy() src must be NUL-terminated

// The strlcpy() function copies up to size - 1 characters from the
// NUL-terminated string src to dst, NUL-terminating the result.

// RETURN VALUE
// The strlcpy() and strlcat() functions return the total length of the string
// they tried to create. For strlcpy() that means the length of src.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char src[11] = "C Language";
// 	char dest[6];

// 	printf("return: %zu\n", strlcpy(dest, src, sizeof(dest)));
// 	printf("dest: %s\n\n", dest);

// 	printf("ft_return: %zu\n", ft_strlcpy(dest, src, sizeof(dest)));
// 	printf("ft_dest: %s\n", dest);
// }
