/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:31:58 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/22 18:36:19 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 10; 
	int b = 6;
	int * pa = &a;
	int * pb = &b;

	printf("The value of a is equal to %i\n", a);
	printf("The value of b is equal to %i\n", b);
	
	ft_ultimate_div_mod(pa, pb);
	printf("The value of a is equal to %i\n", a);
	printf("The value of b is equal to %i\n", b);
	return(0);
}
*/
