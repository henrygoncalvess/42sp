/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hegoncal <hegoncal@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-25 17:42:35 by hegoncal          #+#    #+#             */
/*   Updated: 2026-05-25 17:42:35 by hegoncal         ###   ########.fr       */
/*                                                                            */

void	ft_putchar(char c);
int		my_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*buffer;

	i = 0;
	while (++i < argc - 1)
	{
		if (my_strcmp(argv[i], argv[i + 1]) > 0)
		{
			buffer = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = buffer;
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
	}
	return (0);
}

int	my_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// void	ft_putchar(char c)
// {
// #include <unistd.h>
// 	write(1, &c, 1);
// }
