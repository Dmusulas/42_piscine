/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:11:05 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/07 16:36:21 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(void)
{
	char min[] = {1, 4, 2, 6, 1};
	char max[] = {5, 6, 2, 1, -123};


	for (unsigned int i = 0; i < sizeof(min) / sizeof(min[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(max) / sizeof(max[0]); j++)
		{
			int *array =  ft_range(min[i], max[j]);
			printf("Test case of min='%i', max='%i':\n", min[i], max[j]);
			if (array)
			{
				while (*array)
				{
					printf("%i - ", *array++);
				}
				printf("\n");
			}
		}
	}
	return (0);
}
*/
