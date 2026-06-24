/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 22:11:44 by hegoncal          #+#    #+#             */
/*   Updated: 2026/06/21 21:53:47 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

// #include <stdio.h>

// (0x10) NODE A
// {
// 	*content = "Hello "
// 	*next = NULL
// }

// (0x20) NODE B
// {
// 	*content = "cool "
// 	*next = NULL
// }

// (0x30) NODE C
// {
// 	*content = "world "
// 	*next = NULL
// }

// int	main(void)
// {
// 	t_list *head = ft_lstnew("Hello ");  // (0x11)head  --> (0x10)[hello | NULL]
// 	t_list *nod_b = ft_lstnew("cool ");  // (0x22)nod_b --> (0x20)[cool  | NULL]
// 	t_list *nod_c = ft_lstnew("world "); // (0x33)nod_c --> (0x30)[world | NULL]
// 	ft_lstadd_back(&head, nod_b);
// 	// LOOP 1: tmp = (0x10)[hello | NULL]
// 	// tmp->next == NULL? --> TRUE (there is space to add a node)
// 	//
// 	// (0x11)head --> (0x10)[hello | (0x20)]
// 	//                                  |
// 	//                               (0x20)[cool  | NULL]
// 	ft_lstadd_back(&head, nod_c);
// 	// LOOP 1: tmp = (0x10)[hello | (0x20)]
// 	// tmp->next == (0x20)? --> FALSE (NO space. "tmp" jumps to the next)
// 	//
// 	// LOOP 2: tmp = (0x20)[cool | NULL]
// 	// tmp->next == NULL? --> TRUE (there is space to add a node)
// 	//
// 	// (0x11)head --> (0x10)[hello | (0x20)]
// 	//                                  |
// 	//                               (0x20)[cool  | (0x30)]
// 	//                                                 |
// 	//                                              (0x30)[world | NULL]
// 	//
// 	// (0x11)head -> (0x10) -> (0x20) -> (0x30) -> NULL

// 	printf("ADD_BACK\n");
// 	printf("head content: %s\n", (char *)head->content);
// 	printf("head->next content: %s\n", (char *)head->next->content);
// 	printf("head->next->next content: %s\n", (char *)head->next->next->content);
// }
