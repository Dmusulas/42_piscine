/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:35:24 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/02 16:11:30 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	int	nbs[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7};
	int	powers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7};
	
	for (unsigned int i = 0; i < sizeof(nbs) / sizeof(nbs[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(powers) / sizeof(powers[0]); j++)
		{
			printf("The %i to the power of %i is equal to %i\n", nbs[i],
					powers[j], ft_iterative_power(nbs[i], powers[j]));
		}
	}
	return (0);

}
*/
