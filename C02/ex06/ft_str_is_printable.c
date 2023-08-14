/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:39:15 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/26 15:23:00 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0x20 && *str <= 0x7E)
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
		"\02\04\05\07\127", ft_str_is_printable("\02\04\05\07\127"));
	printf("The string %s is %i\n",
		"AAAAAAA", ft_str_is_printable("AAAAAAA"));
	printf("The string %s is %i\n",
		"^438asd", ft_str_is_printable("^438asd"));
	printf("The string %s is %i\n",
		"%@#$iasdo", ft_str_is_printable("%@#$iasdo"));
}
*/
