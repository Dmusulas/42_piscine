/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:52:26 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 22:00:01 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0x30 && *str <= 0x39)
		{
		}
		else
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("The string %s is %i\n", "AaZzbBcDeF", ft_str_is_numeric("AaZzbBcDeF"));
	printf("The string %s is %i\n", "1aZzbBcDeF", ft_str_is_numeric("1aZzbBcDeF"));
	printf("The string %s is %i\n", "438", ft_str_is_numeric("438"));
	printf("The string %s is %i\n", "%@#$iasdo", ft_str_is_numeric("%@#$iasdo"));
}
*/
