/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:54:57 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/05 22:24:43 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	arr[1000];
	
	for (unsigned int h = 0; h < sizeof(arr) / sizeof(arr[0]); h++)
	{
		arr[h] = h;
	}
	for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("For the number '%i' next prime is '%i' \n",
				arr[i], ft_find_next_prime(arr[i]));
	}
}
*/
