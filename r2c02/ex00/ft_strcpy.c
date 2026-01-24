/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:05:53 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/19 15:53:58 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

//int	main(void)
//{
//	char	text[15] = "teste de texto";
//	char	dest[15];
//	char	*result;
//
//	printf("text: %s\n", text);
//	printf("dest: %s\n", dest);
//	result = ft_strcpy(dest, text);
//	printf("result: %s\n", result);
//}

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
