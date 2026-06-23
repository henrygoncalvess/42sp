/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:49:29 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/22 20:06:56 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

// DESCRIPTION
// The strncmp() function compares only the first (at most) n bytes of s1 and s2
// strncmp() returns an integer indicating the result of the comparison:
// •  0, if the s1 and s2 are equal;
// •  a negative value if s1 is less than s2;
// •  a positive value if s1 is greater than s2.

// RETURN VALUE
// strncmp() return an integer less than, equal to, or greater than zero if the
// first n bytes of s1 is found, respectively, to be less than, to match, or be
// greater than s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	result;

// 	result = ft_strncmp("zyxbcdefgh", "abcdwxyz", 1);
// 	printf("r %i\n", result);
// }
