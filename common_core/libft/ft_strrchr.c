/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-04 21:30:04 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-04 21:30:04 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	s_len;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if ((char)c == '\0')
		return ((char *)&s[s_len]);
	i = s_len - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *result;
// 	char *result2;

// 	result = ft_strrchr("o rato roeu a cara do rei da 42", 'r');
// 	result2 = ft_strrchr("bonjour", 'b');
// 	printf("result: %s\n\n", result);
// 	printf("result: %s\n", result2);
// }