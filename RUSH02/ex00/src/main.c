/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:13:49 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 22:30:35 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"
#include "config.h"
#include <stdlib.h>

long long int	get_inputs(int argc, char *argv[], 
		long long int *key_array, char *val_array[])
{
	int				rez;
	long long int	num;

	num = 0;
	if (argc == 2)
	{
		num = ft_input_validation(argv[1]);
		rez = parse_dict(DICT, key_array, val_array);
	}
	else if (argc == 3)
	{
		num = ft_input_validation(argv[2]);
		rez = parse_dict(argv[1], key_array, val_array);
	}
	if (num == -999 || (argc < 2) || (argc > 3))
	{
		write(1, "Error\n", 6);
		return (-999);
	}
	if (!rez)
	{
		write(1, "Dict Error\n", 11);
		return (-999);
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	long long int	num;
	long long int	key_array[50000];
	char			*val_array[50000];
	int				recurse;
	int				i;

	recurse = 0;
	i = 0;
	num = get_inputs(argc, argv, key_array, val_array);
	if (num == -999)
		return (2);
	parse_nmbr(num, key_array, val_array, &recurse);
	while (val_array[i])
	{
		free(val_array[i++]);
	}
	write(1, "\n", 1);
	return (0);
}
