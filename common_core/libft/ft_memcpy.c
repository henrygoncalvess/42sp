/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 17:45:14 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 17:45:14 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_buff;
	unsigned char		*dest_buff;
	size_t				i;

	src_buff = src;
	dest_buff = dest;
	i = 0;
	while (i < n)
	{
		dest_buff[i] = src_buff[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char original[10] = "incomplete";
// 	char copy[19] = "an            text";

// 	memcpy(&copy[3], original, 10);
// 	printf("memcpy: %s\n", copy);

// 	char ft_original[10] = "incomplete";
// 	char ft_copy[19] = "an            text";

// 	ft_memcpy(&ft_copy[3], ft_original, 10);
// 	printf("ft_memcpy: %s\n", ft_copy);

// 	//

// 	char overlap_text[7] = "ABCDEF";

// 	ft_memcpy(&overlap_text[1], &overlap_text[0], 4);

//     printf("ft_memcpy: %s\n", overlap_text);
// }