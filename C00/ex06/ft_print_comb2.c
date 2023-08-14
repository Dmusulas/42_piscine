/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:56:42 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/20 16:48:54 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_write_numbers(int num_a, int num_b)
{
	char	space;

	space = ' ';
	ft_put_char(num_a / 10 + 0x30);
	ft_put_char(num_a % 10 + 0x30);
	ft_put_char(space); 
	ft_put_char(num_b / 10 + 0x30);
	ft_put_char(num_b % 10 + 0x30);
}

void	ft_insert_commas(void)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb2(void)
{
	char	num_a;
	char	num_b;

	num_a = 0;
	while (num_a <= 98)
	{
		num_b = num_a + 1;
		while (num_b <= 99)
		{
			ft_write_numbers(num_a, num_b);
			if (num_a == 98 && num_b == 99)
			{
			}
			else
			{
				ft_insert_commas();
			}
			num_b++;
		}
		num_a++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return(0);
}
*/
