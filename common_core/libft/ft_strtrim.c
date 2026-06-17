/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-09 12:54:58 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-09 12:54:58 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while ((end - 1) > start && is_in_set(s1[(end - 1)], set))
		end--;
	trimmed_str = malloc(((end - 1) - start + 2) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (start <= (end - 1))
	{
		trimmed_str[i] = s1[start];
		i++;
		start++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("lorem 67ipsum67 dolor bla bla bla", "67"));
// 	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
// 	printf("%s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
// }