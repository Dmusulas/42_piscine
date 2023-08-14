/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:29:25 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 17:34:10 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0x61 && *str <= 0x7A)
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
	printf("The string %s is %i\n", 
		"AaZzbBcDeF", ft_str_is_lowercase("AaZzbBcDeF"));
	printf("The string %s is %i\n",
		"aaaaaaaaa", ft_str_is_lowercase("aaaaaaaaa"));
	printf("The string %s is %i\n",
		"^438asd", ft_str_is_lowercase("^438asd"));
	printf("The string %s is %i\n",
		"%@#$iasdo", ft_str_is_lowercase("%@#$iasdo"));
}
*/
