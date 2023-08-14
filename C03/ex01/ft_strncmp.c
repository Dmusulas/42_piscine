/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:15:15 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 14:50:07 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n != 0 && (*s1 != 0 || *s2 != 0))
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <string.h>
int strncmp(const char *s1, const char *s2, size_t n);
int	main(void)
{
	// Different test cases:
	// s1 < s2 and i == len(s1)
	char s1 [] = "AZ";
	char s2 [] = "AZZ";
	// s1 > s2 and i == len(s2)
	char s1 [] = "AZZ";
	char s2 [] = "AZ";
	printf("The difference between string %s and %s is %i", 
			s1, s2, strncmp(s1, s2, 2));
	return (0);
}
*/
