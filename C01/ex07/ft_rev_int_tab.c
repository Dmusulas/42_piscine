/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:16:12 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 13:25:39 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int c;
	int tab[] = {2, 3, 4, 5};
	for (c = 0; c < 5; c++)
		printf("%i,", tab[c]);
	printf("\n");
	ft_rev_int_tab(tab, 5);
	for (c = 0; c < 5; c++)
		printf("%i,", tab[c]);
	return(0);
}
*/
