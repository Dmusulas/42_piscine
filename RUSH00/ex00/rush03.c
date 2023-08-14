/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:53:46 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/23 15:40:00 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_write_ln(int len, int symbol_left, int symbol_mid, int symbol_right)
{
	int	x_counter;

	x_counter = 1;
	while (x_counter <= len)
	{
		if (x_counter == 1)
		{
			ft_putchar(symbol_left);
		}
		else if (x_counter == len)
		{
			ft_putchar(symbol_right);
		}
		else
		{
			ft_putchar(symbol_mid);
		}
		x_counter++;
	}
}

void	rush(int x, int y)
{
	int	y_counter;

	y_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (y_counter <= y)
		{
			if (y_counter == 1 || y_counter == y)
			{
				ft_write_ln(x, 'A', 'B', 'C');
			}
			else
			{
				ft_write_ln(x, 'B', ' ', 'B');
			}
			ft_putchar('\n');
			y_counter++;
		}
	}
	else
		ft_putstr("The inputs cannot be < 1 for both rows and columns");
}
