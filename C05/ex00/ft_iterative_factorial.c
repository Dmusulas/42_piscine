/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:50:21 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/02 13:28:38 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>
int main(void)
{
	int	array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, -2, 19};

	for (unsigned int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		printf("Factorial of %i is equal to %i\n", array[i]
				, ft_iterative_factorial(array[i]));
	}
	printf("%i", 0 * 0);
	return (0);
}
*/
