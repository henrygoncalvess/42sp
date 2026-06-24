/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 18:16:25 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/21 20:16:21 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// (0x10) NODE A
// {
// 	*content = "Hello "
// 	*next = NULL
// }

// (0x20) NODE B
// {
// 	*content = "world "
// 	*next = NULL
// }

// int	main(void)
// {
// 	t_list *head = ft_lstnew("Hello "); // (0x11)head --> (0x10)[hello | NULL]
// 	t_list *nd_b = ft_lstnew("world "); // (0x22)nd_b --> (0x20)[world | NULL]

// 	ft_lstadd_front(&head, nd_b);
// 	// (0x22)nd_b --> (0x20)[world | (0x10)]

// 	// (0x11)head --> (0x20)[world | (0x10)]
// 	//                                  |
// 	//                               (0x10)[hello | NULL]

// 	printf("ADD_FRONT\n");
// 	printf("head content: %s\n", (char *)head->content);
// 	printf("head->next content: %s\n", (char *)head->next->content);
// }
