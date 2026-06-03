/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 18:18:25 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 18:18:25 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_buff;
	unsigned char		*dest_buff;
	size_t				i;

	src_buff = (const unsigned char *)src;
	dest_buff = (unsigned char *)dest;
	if (dest_buff < src_buff)
	{
		i = 0;
		while (i < n)
		{
			dest_buff[i] = src_buff[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			dest_buff[i - 1] = src_buff[i - 1];
			i--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char original[10] = "incomplete";
// 	char copy[19] = "an            text";

// 	memmove(&copy[3], original, 10);
// 	printf("memmove: %s\n", copy);

// 	char ft_original[10] = "incomplete";
// 	char ft_copy[19] = "an            text";

// 	ft_memmove(&ft_copy[3], ft_original, 10);
// 	printf("ft_memmove: %s\n", ft_copy);

// 	//

// 	char overlap_text[7] = "ABCDEF";

// 	ft_memmove(&overlap_text[1], &overlap_text[0], 4);

// 	printf("ft_memmove: %s\n", overlap_text);
// }