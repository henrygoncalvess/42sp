/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-18 20:56:17 by hegoncal          #+#    #+#             */
/*   Updated: 2026-06-18 20:56:17 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

int	ft_lstsize(t_list *lst)
{
	int		nodes;
	t_list	*tmp;

	tmp = lst;
	nodes = 0;
	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_lstsize(head)); // 1
// }