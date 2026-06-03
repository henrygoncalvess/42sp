/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-25 18:23:36 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-25 18:23:36 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*range_arr;

	if (min >= max)
		return (NULL);
	range = max - min;
	range_arr = malloc(range * sizeof(int));
	if (range_arr == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		range_arr[i] = min;
		min++;
		i++;
	}
	return (range_arr);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	int min = 10;
// 	int max = 40;
// 	int *range = ft_range(min, max);
// 	if (range == NULL)
// 		return (1);
// 	for (int i = 0; i < (max - min); i++)
// 		printf("%d ", range[i]);
// 	printf("\n");
// 	free(range);
// }