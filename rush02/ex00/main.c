/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaia-da <amaia-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:35:03 by amaia-da          #+#    #+#             */
/*   Updated: 2026/02/01 20:42:26 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	file_name[255];
	char	number[100];
	t_dict	*dict_arr;
	int		count;

	count = 0;
	if (!is_valid_parm(argc, argv))
		return (0);
	if (argc == 3)
	{
		ft_strcpy(file_name, argv[1]);
		ft_strcpy(number, argv[2]);
	}
	else
	{
		ft_strcpy(file_name, "numbers.dict");
		ft_strcpy(number, argv[1]);
	}
	dict_arr = malloc(amount_line(file_name) * sizeof(t_dict));
	parse_dict(dict_arr, file_name);
	ft_solve(number, dict_arr, amount_line(file_name), &count);
	write(2, "\n", 1);
	free(dict_arr);
	return (0);
}

void	ft_print_3_digits(char *str, t_dict *dict, int size, int *count)
{
	int		len;
	char	unit[2];
	char	tens[3];

	len = ft_strlen(str);
	set_vars(unit, tens, str);
	check_zero(str, dict, size, count);
	if (len == 3 && str[0] != '0')
	{
		print_from_dict(unit, dict, size, count);
		print_from_dict("100", dict, size, count);
		ft_print_3_digits(str + 1, dict, size, count);
	}
	else if (len == 2 && str[0] != '0')
	{
		if (str[0] == '1')
			print_from_dict(str, dict, size, count);
		else
		{
			print_from_dict(tens, dict, size, count);
			ft_print_3_digits(str + 1, dict, size, count);
		}
	}
	else if (len == 1 && str[0] != '0')
		print_from_dict(str, dict, size, count);
}

void	ft_solve(char *str, t_dict *dict, int size, int *count)
{
	int		len;
	int		is_zero;
	int		group_size;
	char	current_group[4];

	len = ft_strlen(str);
	if (len == 0 || (len == 1 && str[0] == '0'))
		return ;
	group_size = len % 3;
	if (group_size == 0)
		group_size = 3;
	current_group[0] = 0;
	current_group[1] = 0;
	current_group[2] = 0;
	current_group[3] = 0;
	is_zero = 1;
	populate_group(current_group, group_size, str, &is_zero);
	if (!is_zero)
	{
		ft_print_3_digits(current_group, dict, size, count);
		print_magnitude(len, dict, size, count);
	}
	ft_solve(str + group_size, dict, size, count);
}

void	print_magnitude(int len, t_dict *dict, int dict_size, int *count)
{
	int		zeros;
	char	mag_str[150];
	int		i;

	if (len <= 3)
		return ;
	mag_str[0] = '1';
	zeros = ((len - 1) / 3) * 3;
	i = 1;
	while (i <= zeros)
	{
		mag_str[i] = '0';
		i++;
	}
	mag_str[zeros + 1] = '\0';
	print_from_dict(mag_str, dict, dict_size, count);
}

int	is_valid_parm(int argc, char *argv[])
{
	char	file_name[255];

	if (!is_valid_entry(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 3)
		ft_strcpy(file_name, argv[1]);
	else
		ft_strcpy(file_name, "numbers.dict");
	if (!is_valid_dict(file_name))
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}
