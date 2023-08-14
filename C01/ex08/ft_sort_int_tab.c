/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:38:14 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 13:26:15 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *n1, int *n2)
{
	int	tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				ft_swap(tab + j, tab + i);
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int c;
	int tab[] = {6,2,10,4,5};
	for (c = 0; c < 5; c++)
		printf("%i,", tab[c]);
	printf("\n");
	ft_sort_int_tab(tab, 5);
	for (c = 0; c < 5; c++)
		printf("%i,", tab[c]);
	return(0);
}
*/
