/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 13:35:40 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-03 13:35:40 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *src);

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*str_arr;

	len = 0;
	while (src[len])
		len++;
	str_arr = malloc((len + 1) * sizeof(char));
	if (str_arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_arr[i] = src[i];
		i++;
	}
	str_arr[i] = '\0';
	return (str_arr);
}

// #include <stdio.h>
// #include <string.h>
// int    main(void)
// {
//     char *original = "testing my function";
//     char *copy = ft_strdup(original);

//     // 2. Protection: Checks if malloc failed
//     if (copy == NULL)
//     {
//         printf("Memory allocation error!\n");
//         return (1);
//     }
//     // 3. Content Test: Prints the whole string at once using %s
//     printf("Original Content : %s\n", original);
//     printf("Copy Content     : %s\n", copy);
//     // 4. Proves you made a "Deep Copy" and didn't just copy the pointer
//     printf("Original Address : %p\n", (void *)original);
//     printf("Copy Address     : %p\n", (void *)copy);
//     // 5. Standard library test (optional)
//     // Compares if yours does exactly the same as the system's original
//     char *system_copy = strdup(original);
//     printf("System Copy      : %s\n", system_copy);
//     free(system_copy);
//     // 6. Frees the memory you allocated in your ft_strdup!
//     free(copy);
// }