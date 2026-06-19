/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-18 22:11:44 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-18 22:11:44 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// (0x20) NODE A
// {
// 	*content = "Hello, "
// 	*next = NULL
// }

// (0x30) NODE B
// {
// 	*content = "World"
// 	*next = NULL
// }

// int	main(void)
// {
// 	t_list *head = ft_lstnew("Hello, "); // (0x10)head --> (0x20)[hello | NULL]
// 	t_list *new = ft_lstnew("World");    // (0x30)new  --> (0x40)[world | NULL]

// 	ft_lstadd_front(&head, new);
// 	// (0x30)new  --> (0x40)[world | (0x20)]
// 	// (0x10)head --> (0x40)[world | (0x20)]

// 	// (0x10)head --> (0x40)[world | (0x20)]
// 	//                                  |
// 	//                               (0x20)[hello | NULL]

// 	printf("ADD_FRONT\n");
// 	printf("head content: %s\n", (char *)head->content);
// 	printf("head->next content: %s\n", (char *)head->next->content);
// }