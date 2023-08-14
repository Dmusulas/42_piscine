/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:38:54 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/09 21:35:58 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' 
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base)
		return (0);
	if (ft_strlen(base) <= 1 || !base)
		return (0);
	while (i < ft_strlen(base) - 1)
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	while (*base)
	{
		if (*base <= 32 || *base == 127 || *base == '+' || *base == '-')
			return (0);
		base++;
	}
	return (1);
}

int	position_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-999);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	nbr;
	int	valid_base;

	sign = 1;
	nbr = 0;
	valid_base = ft_is_valid(base);
	if (!valid_base || !str)
		return (0);
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (valid_base && position_in_base(*str, base) != -999)
		nbr = nbr * ft_strlen(base) + position_in_base(*str++, base);
	return (nbr * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_atoi_base("29201b3", "0123456789abcdef"));
}
*/
