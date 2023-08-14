/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 22:41:12 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 23:42:18 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_dict_length(long long int *key_array, char *val_array[])
{
	int	i;
	int	j;

	i = 0;
	while (key_array[i])
	{
		i++;
	}
	j = 0;
	while (val_array[j])
	{
		j++;
	}
	if (i != j)
		return (0);
	return (i);
}

char	*pick_dict(int nbr, long long int *key_array, char *val_array[])
{
	int	i;

	i = 0;
	while (key_array[i + 1])
	{
		if (key_array[i] == nbr)
			return (val_array[i]);
		i++;
	}
	if (key_array[i] == nbr)
		return (val_array[i]);
	return (NULL);
}

int	get_dict_index(long long int nbr, long long int *key_array)
{
	int				i;
	int				current_index;
	long long int	result;

	i = 1;
	current_index = 0;
	result = 0;
	while (key_array[i])
	{
		// nbr = 61
		if ((nbr / key_array[i] < result && result > 1) || result == 0) 
			result =  nbr / key_array[i];
		if ((key_array[i] >= 100 && key_array[i] <= 1000 )|| key_array[i] % 10 == 0 || key_array[i] < 20)
		{
			current_index = i;
		}

		//if (result >= 1 && result <= 1000)
		//	current_index = i;
		i++;
	}
	if (!current_index)
		current_index = i - 1;
	return (current_index);
}

void	ft_putstr(char *str, int first)
{
	if (first)
		write(1, " ", 1);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	parse_nmbr(long long int nbr,
		long long int *key_array, char *val_array[], int *recurse)
{
	int		index;

	index = get_dict_index(nbr, key_array);
	if (nbr % key_array[index] == 0)
	{
		ft_putstr(pick_dict(nbr, key_array, val_array), *recurse);
		*recurse = 1;
	}
	else if (nbr > 100)
	{
		parse_nmbr(nbr / key_array[index], key_array, val_array, recurse);
		ft_putstr(pick_dict(key_array[index], key_array, val_array), *recurse);
		parse_nmbr(nbr % key_array[index], key_array, val_array, recurse);
	}
	else if (nbr < 100 && nbr >= 20)
	{
		ft_putstr(pick_dict(key_array[index], key_array, val_array), *recurse);
		parse_nmbr(nbr % key_array[index], key_array, val_array, recurse);
	}
}
