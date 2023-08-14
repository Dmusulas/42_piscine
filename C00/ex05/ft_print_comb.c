/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:07:56 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/19 20:12:07 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_numbers(char num_a, char num_b, char num_c)
{
	write(1, &num_a, 1);
	write(1, &num_b, 1);
	write(1, &num_c, 1);
}

void	ft_insert_commas(void)
{
	int	comma;
	int	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	int	num_a;
	int	num_b;
	int	num_c;

	num_a = '0';
	while (num_a <= '7')
	{
		num_b = num_a + 1;
		while (num_b <= '8')
		{
			num_c = num_b + 1;
			while (num_c <= '9')
			{
				ft_write_numbers(num_a, num_b, num_c);
				num_c++;
				if (num_a != '7')
				{
					ft_insert_commas();
				}
			}
			num_b++;
		}
		num_a++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return(0);
}
*/
