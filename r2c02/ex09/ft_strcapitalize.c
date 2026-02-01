/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:10:49 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/31 16:59:01 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
void	ft_tolower(char *str);
int		ft_isalpha(char c);
int		ft_isalnum(char c);
int		ft_isdigit(char c);

// int	main(void)
//{
//	#include <stdio.h>
//
//	char string[] = "hi, how are you? 42words forty-two; fifty+and+one";
//	printf("%s\n", ft_strcapitalize(string));
//}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_tolower(str);
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] -= ('a' - 'A');
		if (ft_isdigit(str[i]) && ft_isalpha(str[i + 1]))
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				str[i + 1] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}

void	ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
}

int	ft_isdigit(char c)
{
	if (c >= ' ' && c <= '/')
	{
		return (1);
	}
	return (0);
}

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		if (c >= '0' && c <= '9')
			return (1);
	}
	return (0);
}
