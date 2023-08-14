/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:25:50 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/22 18:30:56 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 10; 
	int b = 6;
	int div = 0;
	int mod = 0;

	int * pdiv = &div;
	int * pmod = &mod;

	printf("The value of div is equal to %i\n", div);
	printf("The value of mod is equal to %i\n", mod);
	
	ft_div_mod(a, b, pdiv, pmod);
	printf("The value of div is equal to %i\n", div);
	printf("The value of mod is equal to %i\n", mod);
	return(0);
}
*/
