/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 05:50:23 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/01 15:03:44 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	char	*number;
	char	*name;
}			t_dict;

void		set_dicts(char *str, t_dict *dicts);
int			get_name(char *str, t_dict *dict);
int			get_number(char *str, t_dict *dict);
char		*file_to_str(char *file_name);
int			lines_number(char *str);

#endif
