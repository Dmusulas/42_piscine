/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:54:40 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/10 17:37:31 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

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
/*
#include <stdio.h>
int main()
{
	char *test[] = {"Testing", "this", "out", NULL};
	printf("The array is %i", ft_any(test, &ft_str_is_uppercase));
	char *test1[] = {"TESTING", "THIS", "OUT", NULL};
	printf("The array is %i", ft_any(test1, &ft_str_is_uppercase));
}
*/
