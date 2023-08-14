/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:05:07 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/04 12:35:38 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int array[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_valid(int solution_array[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (solution_array[i] == solution_array[col])
			return (0);
		if ((i - solution_array[i] == col - row))
			return (0);
		if ((i + solution_array[i]) == (col + row))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int solution_array[10], int *combinations, int row, int col)
{
	while (row <= 9)
	{
		solution_array[col] = row;
		if (ft_is_valid(solution_array, row, col))
		{
			if (col >= 9)
			{
				ft_print_array(solution_array);
				*combinations = *combinations + 1;
			}
			else
				ft_solve(solution_array, combinations, 0, col + 1);
		}
		row++;
	}
	solution_array[col] = 0;
}

int	ft_ten_queens_puzzle(void)
{
	int	combinations;
	int	solution_array[10];

	combinations = 0;
	ft_solve(solution_array, &combinations, 0, 0);
	return (combinations);
}
/*
#include <stdio.h>

int	main(void)
{
	int	test;

	test = ft_ten_queens_puzzle();
	printf("Combs: %i", test);
	return (0);
}
*/
