/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:10:05 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/24 21:56:43 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0x41 && str[i] <= 0x5A)
		{
			str[i] = str[i] + 0x20;
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
	char str[] = "AdxAcAAbAAAAbAA";
	printf("The string is '%s' before the function\n", str);
	printf("The string memory address is '%p' before the function\n", str);
	char *aftr = ft_strlowcase(str);
	printf("The string is '%s' after the function\n", aftr);
	printf("The string memory address is '%p' before the function", aftr);
}
*/
