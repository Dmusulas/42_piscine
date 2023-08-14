/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:34:02 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 21:59:11 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 0x41 && *str <= 0x5A) || (*str >= 0x61 && *str <= 0x7A))
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
	printf("The string %s is %i\n", "AaZzbBcDeF", ft_str_is_alpha("AaZzbBcDeF"));
	printf("The string %s is %i\n", "1aZzbBcDeF", ft_str_is_alpha("1aZzbBcDeF"));
	printf("The string %s is %i\n", "^438asd", ft_str_is_alpha("^438asd"));
	printf("The string %s is %i\n", "%@#$iasdo", ft_str_is_alpha("%@#$iasdo"));
}
*/
