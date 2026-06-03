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
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dst[dlen] != '\0' && dlen < size)
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (size == dlen)
		return (dlen + slen);
	while (src[i] != '\0' && (dlen + i) < (size - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}

//#include <stdio.h>
//int	main(void)
//{
//	char dest1[25] = "o rato roeu o ";
//	char *text1 = "rei da 42";
//	int result1;
//
//	result1 = ft_strlcat(dest1, text1, 18);
//	printf("result1: %i\n", result1);
//	printf("text1: %s\n", dest1);
//}