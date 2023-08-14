/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keramos- <keramos-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:50:48 by keramos-          #+#    #+#             */
/*   Updated: 2023/07/31 15:13:16 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_str(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= 49 && str[i] <= 52))
				return (0);
		}
		else if (str[i] != ' ' || str[i + 1] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	**init_2d_array(int size)
{
	int	**array;
	int	k;
	int	row;
	int	col;

	array = (int **) malloc(size * sizeof(int *));
	k = 0;
	while (k < size)
	{
		array[k] = (int *) malloc(size * sizeof(*array));
		k++;
	}
	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			array[row][col] = 0;
			col++;
		}
		row++;
	}
	return (array);
}

void	destroy_2d_array(int **array, int table_size)
{
	int	i;

	i = 0;
	while (i < table_size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	**ft_arr_split(char *str, int table_size)
{
	int	str_i;
	int	column_c;
	int	row_c;
	int	**constrains;

	constrains = init_2d_array(table_size);
	row_c = 0;
	str_i = 0;
	while (row_c < table_size)
	{
		column_c = 0;
		while (column_c < table_size)
		{
			if (str_i % 2 == 0)
			{
				constrains[row_c][column_c] = str[str_i] - 48;
				column_c++;
			}
			str_i++;
		}
		row_c++;
	}
	return (constrains);
}
