/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:54:10 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 22:04:59 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "config.h"
#include "rush.h"

void	get_keys(char **array_of_strs, long long int *key_array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (array_of_strs[i])
	{
		if (ft_str_is_numeric(array_of_strs[i]))
		{
			key_array[j] = ft_atoi(array_of_strs[i]);
			j++;
		}
		i++;
	}
	key_array[j] = 0;
}

void	get_value(char **array_of_strs, char **val_array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (array_of_strs[i])
	{
		if (!ft_str_is_numeric(array_of_strs[i]))
		{
			val_array[j] = array_of_strs[i];
			j++;
		}
		i++;
	}
	val_array[j] = 0;
}

int	parse_dict(char *file_path, long long int *key_array, char **val_array)
{
	int		file_descripthor;
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;
	char	**thearray;
	int		i;

	i = 0;
	file_descripthor = open(file_path, O_RDONLY);
	if (file_descripthor == -1)
		return (0);
	bytes_read = read(file_descripthor, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	close(file_descripthor);
	thearray = ft_split(buffer);
	if (!thearray)
	{
		return (0);
	}
	get_keys(thearray, key_array);
	get_value(thearray, val_array);
	free(thearray);
	return (1);
}
