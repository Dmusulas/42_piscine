/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:29:36 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/31 18:54:56 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	val(char c)
{
	if (c >= '0' && c <= '9')
		return ((int)c - '0');
	else
		return ((int)c - 'A' + 10);
}

int	ft_valid_base(char *base)
{
	int	i;
	int	a;
	int	j;

	a = 0;
	j = 0;
	i = 0;
	while (base[i] != '\0')
		i++;
	if (i < 2)
		return (0);
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' 
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	i;
	int	sign;
	int	power;
	int	str_len;

	nbr = 0;
	sign = 1;
	i = 0;
	power = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	str_len = ft_strlen(str);
	while (str_len >= 0)
	{
		nbr += val(str[i]) * power;
		power = power * ft_strlen(base);
		str_len--;
	}
	return (nbr);
}

#include <stdio.h>
int main(void)
{
	char	*nbrs[] = {"010101"};
	int	test_case = 0;
	char *bases[] = {"0123456789", "01", "0123456789ABCDEF", "poneyvif",
		"+01", "-01", "00112345"};
	for (unsigned int i = 0; i < sizeof(nbrs) / sizeof(nbrs[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(bases) / sizeof(bases[0]); j++)
		{
			printf("=============TEST CASE %i ================\n", test_case);
			int rez = ft_atoi_base(nbrs[i], bases[j]);
			printf("For the int %s and base %s, result is %i\n", nbrs[i], bases[j], rez);
			printf("\n");
			test_case++;
		}
	}
	return (0);
	return(0);
}

