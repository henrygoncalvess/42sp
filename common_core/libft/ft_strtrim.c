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
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int i;

	if (!s1)
		return (NULL);
	i =0;
	while (s1[i])
	trimmed_str = malloc((1 + 1) * sizeof(char *));
	if (!trimmed_str)
		return (NULL);
	trimmed_str[0] = '\0';
	return (trimmed_str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("lorem 6ipsum6 dolor bla bla bla", "6"));
	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
	printf("%s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
}