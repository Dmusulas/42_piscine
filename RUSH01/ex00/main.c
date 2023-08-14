/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keramos- <keramos-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:09:41 by keramos-          #+#    #+#             */
/*   Updated: 2023/07/30 22:13:54 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include "main2.h"

int	main(int argc, char *argv[])
{
	int	**constrains;
	int	**board;

	if (argc == 2)
	{
		if (!ft_check_str(argv[1]))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		constrains = ft_arr_split(argv[1], 4);
		board = init_2d_array(4);
		if (!(ft_solve(constrains, board, 0, 0)))
			write(1, "Error\n", 6);
		else
			print_criteria(board);
	}
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	destroy_2d_array(constrains, 4);
	destroy_2d_array(board, 4);
	return (0);
}
