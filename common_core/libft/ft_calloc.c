/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-09 11:00:58 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-09 11:00:58 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	size_max;
	size_t	total_bytes;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	size_max = (size_t)-1;
	if (size > size_max / nmemb)
		return (NULL);
	total_bytes = nmemb * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_bytes);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("========================================\n");
// 	printf("      CALLOC VS MY_CALLOC TESTER        \n");
// 	printf("========================================\n\n");
// 	printf("[TEST 1] Normal Allocation (5 integers)\n");

// 	int *std_arr = calloc(5, sizeof(int));
// 	int *my_arr = ft_calloc(5, sizeof(int));

// 	printf("Standard calloc: ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", std_arr[i]);

// 	printf("\nMy calloc:       ");
// 	for (int i = 0; i < 5; i++)
// 		printf("%d ", my_arr[i]);
// 	printf("\n\n");

// 	free(std_arr);
// 	free(my_arr);
// }