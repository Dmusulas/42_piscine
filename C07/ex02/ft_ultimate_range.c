/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:27:19 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/07 16:36:04 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*range_temp;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range_temp = malloc((max - min) * sizeof(int));
	if (!range_temp)
	{
		*range = 0;
		return (-1);
	}
	*range = range_temp;
	while (min < max)
	{
		range_temp[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char min[] = {1, 4, 2, 6, 1};
	char max[] = {5, 6, 2, 1, -123};
	//int a = 0;


	for (unsigned int i = 0; i < sizeof(min) / sizeof(min[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(max) / sizeof(max[0]); j++)
		{
			int	*range[250];
			int	rez =  ft_ultimate_range(range, min[i], max[j]);
			 
			printf("Test case of min='%i', max='%i':\n", min[i], max[j]);
			if (rez)
				printf("First int is %i\n", *range[0]);
			printf("Result is %i \n", rez);
		}
	}
	return (0);
}
*/
