/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:42:29 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 19:07:58 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0x61 && str[i] <= 0x7A)
		{
			str[i] = str[i] - 0x20;
		}
		else
		{
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "ABaSDSiaaDA";
	printf("The string is '%s' before the function\n", str);
	printf("The string memory address is '%p' before the function\n", str);
	char *aftr = ft_strupcase(str);
	printf("The string is '%s' after the function\n", aftr);
	printf("The string memory address is '%p' before the function", aftr);
}
*/
