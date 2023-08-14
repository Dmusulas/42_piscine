/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:11:20 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/22 18:24:56 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 22; 
	int b = 42;

	int * ptra = &a;
	int * ptrb = &b;

	printf("The value of a is equal to %i\n", a);
	printf("The value of b is equal to %i\n", b);
	
	ft_swap(ptra, ptrb);
	printf("The value of a is equal to %i\n", a);
	printf("The value of b is equal to %i\n", b);
	return(0);
}
*/
