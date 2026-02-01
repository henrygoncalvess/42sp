/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:24:20 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/31 17:00:25 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
//{
//	#include <stdio.h>
//	char	text[16] = "teste de texto";
//	char	dest[16];
//	char	*result;
//
//	printf("text: %s\n", text);
//	printf("dest: %s\n", dest);
//	result = ft_strncpy(dest, text, 7);
//	printf("\nresult: %s\n", result);
//}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	limit;
	int	c;

	limit = n;
	c = 0;
	while (c < limit)
	{
		if (src[c] == '\0')
			break ;
		dest[c] = src[c];
		c++;
	}
	while (c < limit)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
