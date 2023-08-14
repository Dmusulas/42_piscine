/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:32:36 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/10 19:52:46 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	rez;

	i = 0;
	rez = 0;
	while (i < length - 1)
	{
		rez = f(tab[i], tab[i + 1]);
		if (rez > 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	ft_compare(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int main()
{
	int arr[] = {};
	printf("the array is sorted %i", ft_is_sort(arr, 0, &ft_compare));
}
*/
