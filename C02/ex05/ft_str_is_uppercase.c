/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:35:13 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 21:14:41 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0x41 && *str <= 0x5A)
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
		"AaZzbBcDeF", ft_str_is_uppercase("AaZzbBcDeF"));
	printf("The string %s is %i\n",
		"AAAAAAA", ft_str_is_uppercase("AAAAAAA"));
	printf("The string %s is %i\n",
		"^438asd", ft_str_is_uppercase("^438asd"));
	printf("The string %s is %i\n",
		"%@#$iasdo", ft_str_is_uppercase("%@#$iasdo"));
}
*/
