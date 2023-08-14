/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:43:27 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/05 21:25:22 by dmusulas         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;
	int	sign;

	nbr = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]) == 1)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

#include <stdio.h>
int main(void)
{
	char *str[] = {" \t---+--+1234ab56", "     ", "-----5555999a", ""};
	for (unsigned int i = 0; i < sizeof(str) / sizeof(str[0]) ; i++) 
	{
		printf("The resulting int for the string %s is %i\n", str[i], 
		ft_atoi(str[i]));
	}
	return(0);
}

