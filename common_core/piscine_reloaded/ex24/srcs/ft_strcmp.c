/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 12:58:57 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-26 12:58:57 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

// int	main(void)
// {
// #include <stdio.h>

// 	printf("%i\n", ft_strcmp("ABC", "ABC"));
// 	printf("%i\n", ft_strcmp("ABC", "AB"));
// 	printf("%i\n", ft_strcmp("ABA", "ABZ"));
// }