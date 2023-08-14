/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:47:23 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 22:11:22 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "config.h"
#include <fcntl.h>

int	calculate_length_of_dict(char *file_path)
{
	int		file_descripthor;
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;
	int		i;
	int		count;

	file_descripthor = open(file_path, O_RDONLY);
	i = 0;
	count = 0;
	if (file_descripthor == -1)
		return (0);
	bytes_read = read(file_descripthor, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	close(file_descripthor);
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count + 1);
}

char	**create_array_char(char *file_path)
{
	char	**array;
	int		size;
	int		i;

	i = 0;
	size = calculate_length_of_dict(file_path);
	if (!size)
		write(1, "Dict Error\n", 11);
	array = (char **) malloc(size * sizeof(char *));
	if (!array)
		return (0);
	while (i < size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

long long int	*create_array_int(char *file_path)
{
	long long	*array;
	int			size;
	int			i;

	i = 0;
	size = calculate_length_of_dict(file_path);
	if (!size)
		write(1, "Dict Error\n", 11);
	array = (long long int *) malloc(size * sizeof(long long int));
	if (!array)
		return (0);
	while (i < size)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
