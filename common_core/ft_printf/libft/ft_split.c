/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-09 13:38:06 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-09 13:38:06 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char const *s, char c);
static int	ft_words_count(const char *str, char c);
static int	ft_wrdlen(const char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**new_arr;
	int		word_p;

	if (!s)
		return (NULL);
	new_arr = malloc((ft_words_count(s, c) + 1) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	word_p = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			new_arr[word_p] = malloc((ft_wrdlen(s, c) + 1) * sizeof(char));
			if (!new_arr[word_p])
				return (NULL);
			ft_strlcpy(new_arr[word_p], s, ft_wrdlen(s, c) + 1);
			s += ft_wrdlen(s, c);
			word_p++;
		}
	}
	new_arr[word_p] = NULL;
	return (new_arr);
}

static int	ft_wrdlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static int	ft_words_count(const char *str, char c)
{
	int	is_word;
	int	words;
	int	i;

	i = 0;
	words = 0;
	is_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && is_word == 0)
		{
			words++;
			is_word = 1;
		}
		else if (str[i] == c)
			is_word = 0;
		i++;
	}
	return (words);
}

// int	main(void)
// {
// 	char *str = "lorem ipsum, dolor bla, bla bla";
// 	char **result = ft_split(str, ',');

// 	int arr_len = sizeof(result) / sizeof(result[0]);
// 	for (int i = 0; i < arr_len; i++)
// 	{
// 		printf("%s\n", result[i]);
// 	}

// 	// printf("%i\n", ft_wrdlen(" a,", ','));
// 	// printf("%i\n", ft_wrdlen(" a,,", ','));
// 	// printf("%i\n", ft_wrdlen(" a,,a", ','));
// 	// printf("%i\n", ft_wrdlen(",a", ','));
// 	// printf("%i\n", ft_wrdlen(",a,a", ','));
// 	// printf("%i\n", ft_wrdlen("a, a, a", ','));
// }