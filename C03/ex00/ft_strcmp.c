/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:25:47 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 17:37:50 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
int	main(void)
{
	char s1 [] = "ABC";
	char s2 [] = "AB";
	printf("The difference between string %s and %s is %i", 
	s1, s2, ft_strcmp(s1, s2));
}
*/
