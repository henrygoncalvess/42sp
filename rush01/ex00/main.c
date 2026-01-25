/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:37:23 by hegoncal          #+#    #+#             */
/*   Updated: 2026/01/25 11:57:44 by hegoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		mini_atoi(char c);
int		is_str_valid(char *str);
void	print_msg(char *msg);
int		rush(char *str);

int	main(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc != 2)
	{
		print_msg("Error\n");
		return (1);
	}
	while (argv[1][len] != '\0')
		len++;
	if (len != 31 || is_str_valid(argv[1]) == 0)
	{
		print_msg("Error\n");
		return (1);
	}
	if (rush(argv[1]) == 0)
	{
		print_msg("Error\n");
		return (1);
	}
	return (0);
}

int	is_str_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (mini_atoi(str[i]) <= 0 || mini_atoi(str[i]) >= 5)
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}
