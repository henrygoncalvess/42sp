/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-09 11:33:34 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-09 11:33:34 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	str_len;
	unsigned int	i;

	str_len = 0;
	while (s[str_len] != '\0')
		str_len++;
	if (start > str_len)
		return (NULL);
	substr = malloc(len * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 0, 10));
// 	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 400, 20));
// }