/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:38:08 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/05 20:00:49 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *copy;
	int src_len;
	int i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	copy = malloc(sizeof(char) * src_len);
	i = 0;
	while (i < src_len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

//int main(void)
//{
//#include <stdio.h>
//	printf("%s\n", ft_strdup("teste"));
//}
