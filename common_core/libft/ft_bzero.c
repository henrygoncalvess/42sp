/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 17:25:21 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 17:25:21 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <strings.h>
// int main(void)
// {
//     char text[16] = "hello memset!";
//     char ft_text[16] = "hello memset!";

//     bzero(text, 5);
//     ft_bzero(ft_text, 5);

//     printf("original: ");
//     for (int i = 0; i < 16; i++)
//     {
//         if (text[i] == '\0')
//             printf("[0]");
//         else
//             printf(" %c ", text[i]);
//     }
//     printf("\n");

//     printf("ft_bzero: ");
//     for (int i = 0; i < 16; i++)
//     {
//         if (ft_text[i] == '\0')
//             printf("[0]");
//         else
//             printf(" %c ", ft_text[i]);
//     }
//     printf("\n");
// }