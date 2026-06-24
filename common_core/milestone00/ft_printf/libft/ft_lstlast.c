/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-18 21:55:19 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-18 21:55:19 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *head = NULL;
// 	head = ft_lstnew("World!");
// 	t_list *new = ft_lstnew("Hello,");
// 	ft_lstadd_front(&head, new);
// 	printf("%i\n", ft_lstsize(head)); // 2
//  printf("%s %s\n", head->content, head->next->content);
// }