/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:29:00 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/04 22:46:23 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb *= ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int main(void)
{
	int	array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, -2, 19, -85};

	for (unsigned int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		printf("Factorial of %i is equal to %i\n", array[i]
				, ft_recursive_factorial(array[i]));
	}
	return (0);
}
*/
