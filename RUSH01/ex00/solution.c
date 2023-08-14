/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:18:10 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/30 22:19:47 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_uniqueness(int *board[], int row, int col, int nb);
int	ft_col_up(int *constrains[], int *board[], int col, int nb);
int	ft_col_down(int *constrains[], int *board[], int col, int nb);
int	ft_row_right(int *constrains[], int *board[], int row, int nb);
int	ft_row_left(int *constrains[], int *board[], int row, int nb);

int	ft_is_safe(int *constrains[], int *board[], int *attributes, int nb)
{
	int	row;
	int	col;

	row = attributes[0];
	col = attributes[1];
	if (!ft_check_uniqueness(board, row, col, nb))
		return (0);
	if (col == 3)
	{
		if (!ft_row_left(constrains, board, row, nb))
			return (0);
		if (!ft_row_right(constrains, board, row, nb))
			return (0);
	}
	else if (row == 3)
	{
		if (!ft_col_up(constrains, board, col, nb))
			return (0);
		if (!ft_col_down(constrains, board, col, nb))
			return (0);
	}
	return (1);
}

int	ft_solve(int *constrains[], int *solved_board[], int row, int col)
{
	int	nbr;
	int	attributes[2];

	nbr = 1;
	attributes[0] = row;
	attributes[1] = col;
	while (nbr <= 4)
	{
		if (ft_is_safe(constrains, solved_board, attributes, nbr))
		{
			solved_board[row][col] = nbr;
			if (col == 3 && row == 3)
			{
				return (1);
			}
			else if (col == 3 && ft_solve(constrains, solved_board, row + 1, 0))
				return (1);
			else if (ft_solve(constrains, solved_board, row, col + 1))
				return (1);
		}
		nbr++;
	}
	solved_board[row][col] = 0;
	return (0);
}
