/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:49:25 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/05 12:52:52 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_binary_search_sqrt(int nb, long int low, long int high)
{
	long int	mid;

	if (high >= low)
	{
		mid = (high + low) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			return (ft_binary_search_sqrt(nb, mid + 1, high));
		return (ft_binary_search_sqrt(nb, low, mid - 1));
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int					answer;
	long unsigned int	high;
	long unsigned int	low;

	answer = 0;
	high = nb / 2;
	low = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	answer = ft_binary_search_sqrt(nb, low, high);
	return (answer);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int	arr[] = {-12, 0, 2, 4, 9, 16, 100420441, 266666655, 
	400000000,625000000, INT_MAX};
	for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("The sqrt number %i is %i\n",
				arr[i], ft_sqrt(arr[i]));
	}
}
*/
