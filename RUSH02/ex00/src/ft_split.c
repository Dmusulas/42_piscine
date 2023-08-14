/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:38:52 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 20:53:14 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_count_words(char *str);
int	ft_isspace(char c);

int	ft_strlen_sep(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_isspace(str[i]))
		i++;
	return (i);
}

char	*ft_get_word(char *str)
{
	int		strlen;
	int		i;
	char	*word;

	i = 0;
	strlen = ft_strlen_sep(str);
	word = (char *) malloc(strlen * sizeof(char) + 1);
	if (!word)
		return (NULL);
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str)
{
	char	**array;
	int		words;
	int		i;

	i = 0;
	words = ft_count_words(str);
	array = (char **) malloc(words * sizeof(char *) + 1);
	if (!array)
		return (NULL);
	while (*str)
	{
		while (ft_isspace(*(str)))
			str++;
		if (!ft_isspace(*str))
		{
			array[i] = ft_get_word(str);
			i++;
		}
		while (!ft_isspace(*(str)) && *(str + 1) != 0)
			str++;
		str++;
	}
	array[i] = 0;
	return (array);
}

int	ft_count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
		{
			i++;
		}
		if (!ft_isspace(str[i]) && (i == 0
				|| str[i] == 0 || ft_isspace(str[i - 1])))
			count++;
		while (!ft_isspace(str[i]) && str[i + 1] != 0)
		{
			i++;
		}
		i++;
	}
	return (count);
}
/*
//TEST: remove afterwards
#include <stdio.h>
int	main(void)
{
	char	**test_array;
	int		i;

	i = 0;
	test_array = ft_split("Just testing 123123 nothing here");
	while (test_array[i])
	{
		printf("Current string is: %s", test_array[i]);
		i++;
	}
	return (0);
}
*/
