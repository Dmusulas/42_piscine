/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:08:14 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/28 11:43:04 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0 && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		n--;
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	needle_len;

	needle_len = ft_strlen(to_find);
	if (needle_len == 0)
		return (str);
	while (*str != 0)
	{
		if (*str == *to_find)
		{
			if (ft_strncmp(str, to_find, needle_len) == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
char	*strstr(const char *haystack, const char *needle);
int	main(void)
{
	char *haystack[] = {"The 42 Berlin is the best place to learn coding", 
		"42", ""};
	char *needle[] = {"42 Berlin", "", "B", "b"};
	for (unsigned int i = 0; i < sizeof(haystack) / sizeof(haystack[0]); i++)
	{
		for (unsigned int j = 0; j < sizeof(needle) / sizeof(needle[0]); j++)
		{
			printf("Searching for string '%s' in '%s'\n", needle[j], haystack[i]);
			printf("Expected pointer location is %p\n", 
				strstr(haystack[i], needle[j]));
			printf("Returned pointer location is: %p\n", 
				ft_strstr(haystack[i], needle[j]));
		}
	}
	return (0);
}
*/
