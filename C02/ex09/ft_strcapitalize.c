/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:13:16 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/26 15:28:52 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chr_is_alphanumeric(char chr)
{
	if ((chr >= 0x41 && chr <= 0x5A) 
		|| (chr >= 0x61 && chr <= 0x7A)
		|| (chr >= 0x30 && chr <= 0x39))
		return (1);
	else
		return (0);
}

int	ft_chr_is_uppercase(char chr)
{
	if (chr >= 0x41 && chr <= 0x5A)
	{
		return (1);
	}
	else
		return (0);
}

int	ft_chr_is_lowercase(char chr)
{
	if (chr >= 0x61 && chr <= 0x7A)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_chr_is_lowercase(str[i]) == 1)
		{
			str[i] = str[i] - 0x20;
		}
		else if (ft_chr_is_lowercase(str[i]) == 1
			&& ft_chr_is_alphanumeric(str[i - 1]) == 0)
		{
			str[i] = str[i] - 0x20;
		}
		else if (ft_chr_is_uppercase(str[i]) == 1
			&& ft_chr_is_alphanumeric(str[i - 1]) == 0)
		{
		}
		else if (ft_chr_is_uppercase(str[i]) == 1)
		{
			str[i] = str[i] + 0x20;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "[[salut, coMent tu vas ? 42mots quaraRte-Deux; cinquante+ET+un";
	printf("The string is '%s' before the function\n", str);
	printf("The string memory address is '%p' before the function\n", str);
	char *aftr = ft_strcapitalize(str);
	printf("The string is '%s' after the function\n", aftr);
	printf("The string memory address is '%p' before the function", aftr);
}
*/
