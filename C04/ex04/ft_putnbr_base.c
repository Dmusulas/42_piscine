/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:47:06 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/31 17:52:36 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_double_char(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (*(str + i))
	{
		j = i + 1;
		while (*(str + j))
		{
			if (*(str + i) == *(str + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

char	*ft_check_base(char *base)
{
	int	base_i;
	int	comparison_i;

	base_i = 0;
	comparison_i = 0;
	while (base[comparison_i] == "poneyvif"[comparison_i])
	{
		if (base[comparison_i] == 0)
		{
			return ("01234567");
		}
		comparison_i++;
	}
	while (base[base_i])
	{
		if (base[base_i] == '-' || base[base_i] == '+')
			return ("");
		base_i++;
	}
	if (ft_double_char(base))
		return ("");
	else
		return (base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base = ft_check_base(base);
	base_len = ft_strlen(base);
	if (base_len < 2)
		return ;
	else if (*base == '\0')
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -base_len)
			ft_putnbr_base(-(nbr / base_len), base);
		ft_putchar(base[-(nbr % base_len)]);
	}
	else if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
	}
	else
		ft_putchar(base[nbr]);
}
/*
#include <stdio.h>
int	main(void)
{
	int nbrs[] = {1234123, -5465, 1, 0, -2147483648};
	int test_case = 0;
	char *bases[] = {"0123456789", "01", "0123456789ABCDEF", "poneyvif",
		"+01", "-01", "00112345"};
	for (unsigned int i = 0; i < sizeof(nbrs) / sizeof(nbrs[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(bases) / sizeof(bases[0]); j++)
		{
			printf("=============TEST CASE %i ================\n", test_case);
			printf("For the int %i and base %i the result is\n", nbrs[i],
				ft_strlen(bases[j]));
			ft_putnbr_base(nbrs[i], bases[j]);
			printf("\n");
			test_case++;
		}
	}
	return (0);
}
*/
