/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:36:45 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 17:26:09 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(int c)
{
	if (c >= 0x20 && c <= 0x7E)
	{
		return (1);
	}
	else
		return (0);
}

void	ft_print_non_printable(char c)
{
	char	*hexarray;

	hexarray = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexarray[c / 16]);
	ft_putchar(hexarray[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_print_non_printable(str[i]);
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char str[] = "\x7f \12 \11 Coucou\ntu vas bien ?";

	printf("The initial str is %s\n", str);

	ft_putstr_non_printable(str);
}
*/
