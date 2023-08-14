/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:20:29 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/05 22:25:09 by dmusulas         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	int	arr[100];
	
	for (unsigned int h = 0; h < sizeof(arr) / sizeof(arr[0]); h++)
	{
		arr[h] = h;
	}
	for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("The number '%i' is Prime %i \n",
				arr[i], ft_is_prime(arr[i]));
	}
}
*/
