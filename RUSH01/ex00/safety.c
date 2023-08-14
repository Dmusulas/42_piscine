/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safety.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:03:25 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/30 21:30:18 by keramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_uniqueness(int *board[], int row, int col, int nb)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (board[row][i++] == nb)
			return (0);
	}
	i = 0;
	while (i <= 3)
	{
		if (board[i++][col] == nb)
			return (0);
	}
	return (1);
}

int	ft_col_up(int *constrains[], int *board[], int col, int nb)
{
	int	highest;
	int	i;
	int	count;

	i = 0;
	count = 0;
	highest = 0;
	board[3][col] = nb;
	while (i <= 3)
	{
		if (board[i][col] > highest)
		{
			highest = board[i][col];
			count++;
		}
		i++;
	}
	board[3][col] = 0;
	if (constrains[0][col] == count) 
		return (1);
	return (0);
}

int	ft_col_down(int *constrains[], int *board[], int col, int nb)
{
	int	highest;
	int	i;
	int	count;

	i = 3;
	count = 0;
	highest = 0;
	board[3][col] = nb;
	while (i >= 0)
	{
		if (board[i][col] > highest)
		{
			highest = board[i][col];
			count++;
		}
		i--;
	}
	board[3][col] = 0;
	if (constrains[1][col] == count)
		return (1);
	return (0);
}

int	ft_row_right(int *constrains[], int *board[], int row, int nb)
{
	int	highest;
	int	i;
	int	count;

	i = 3;
	count = 0;
	highest = 0;
	board[row][3] = nb;
	while (i >= 0)
	{
		if (board[row][i] > highest)
		{
			highest = board[row][i];
			count++;
		}
		i--;
	}
	board[row][3] = 0;
	if (constrains[3][row] == count)
		return (1);
	return (0);
}

int	ft_row_left(int *constrains[], int *board[], int row, int nb)
{
	int	highest;
	int	i;
	int	count;

	i = 0;
	count = 0;
	highest = 0;
	board[row][3] = nb;
	while (i <= 3)
	{
		if (board[row][i] > highest)
		{
			highest = board[row][i];
			count++;
		}
		i++;
	}
	board[row][3] = 0;
	if (constrains[2][row] == count)
	{
		return (1);
	}
	return (0);
}
