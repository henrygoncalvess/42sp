/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:42:18 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/03 16:45:15 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*file_to_str(char **filenames);
void	print_error(char *str, int status);
int		check_header(char *str);

#endif
