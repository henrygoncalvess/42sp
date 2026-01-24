/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:24:20 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/17 12:59:52 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*
int	main(void)
{
	char	text[16] = "teste de texto";
	char	dest[16];
	char	*result;
	char	text2[16] = "teste de texto";
	char	dest2[16];
	char	*result2;

	printf("text: %s\n", text);
	printf("dest: %s\n", dest);
	result = ft_strncpy(dest, text, 16);
	result2 = strncpy(dest, text, 16);
	printf("\nresult: %s\n", result);
	printf("result2: %s\nmeu: ", result2);


	int c = 0;
	while (c < 16)
	{
		printf("%d ", result[c]);
		c++;
	}
	printf("\nfunc: ");
	c = 0;
	while (c < 16)
	{
		printf("%d ", result2[c]);
		c++;
	}
}
*/

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
