/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:24:25 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/02 13:23:54 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

void	ft_insertion_sort(char *argv[], int argc)
{
	int		i;
	int		j;
	char	*key;

	i = 1;
	while (i < argc)
	{
		key = argv[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(argv[j], key) > 0)
		{
			argv[j + 1] = argv[j];
			j = j - 1;
		}
		argv[j + 1] = key;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*program_name;

	i = 1;
	program_name = argv[0];
	if (argc > 1)
	{
		ft_insertion_sort(argv, argc);
		while (i < argc)
		{
			if (argv[i] != program_name)
			{
				ft_putstr(argv[i]);
				ft_putstr("\n");
			}
			i++;
		}
	}
	return (0);
}
