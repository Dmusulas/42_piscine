/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:38:55 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/10 18:28:57 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
// TESTING: begins here
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

#include <stdio.h>
int main()
{
	char *test[] = {"Testing", "this", "out"};
	printf("The array is %i", ft_any(test, 3, &ft_str_is_uppercase));
	char *test1[] = {"TESTING", "THIS", "OUT"};
	printf("The array is %i", ft_any(test1, 3, &ft_str_is_uppercase));
}
*/
