/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaia-da <amaia-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 05:50:23 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/01 13:56:55 by amaia-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	char	number[150];
	char	name[150];
}			t_dict;

void		populate_group(char current_group[4], int group_size, char *str,
				int *is_zero);
void		check_zero(char *str, t_dict *dict, int size, int *count);
void		set_vars(char unit[], char tens[], char *str);
void		remove_final_spcs(char *str);
int			is_numeric(char *str);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);
int			read_line(int file, char *buffer, int limit_buffer);
int			amount_line(char *file_name);
void		ignore_space(int *i, char *line);
t_dict		line_2_dict(char *line);
int			is_valid(int argc, char **argv);
int			is_valid_entry(int argc, char *argv[]);
int			is_valid_dict(char *file_name);
char		*ft_strcpy(char *dest, char *src);
int			is_valid_parm(int argc, char *argv[]);
int			amount_line(char *file_name);
void		parse_dict(t_dict *dict_arr, char *file_name);
void		print_from_dict(char *n, t_dict *dict, int dict_size, int *count);
void		ft_print_3_digits(char *str, t_dict *dict, int size, int *count);
void		print_magnitude(int len, t_dict *dict, int dict_size, int *count);
void		ft_solve(char *str, t_dict *dict, int size, int *count);

#endif
