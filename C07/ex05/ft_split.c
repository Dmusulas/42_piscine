/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:52:19 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/08 19:52:42 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isseperator(char c, char *charset)
{
	if (!charset)
		return (0);
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (ft_isseperator(str[i], charset))
		{
			i++;
		}
		if (!ft_isseperator(str[i], charset) && (i == 0
				|| str[i] == 0 || ft_isseperator(str[i - 1], charset)))
			count++;
		while (!ft_isseperator(str[i], charset) && str[i + 1] != 0)
		{
			i++;
		}
		i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_isseperator(str[i], charset))
		i++;
	return (i);
}

char	*ft_get_word(char *str, char *charset)
{
	int		strlen;
	int		i;
	char	*word;
	int		j;

	j = 0;
	i = 0;
	strlen = ft_strlen_sep(str, charset);
	if (!strlen)
		return (NULL);
	word = (char *) malloc(strlen * sizeof(char) + 2);
	if (!word)
		return (NULL);
	while (str[i] && !ft_isseperator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;

	i = 0;
	array = (char **) malloc((ft_count_words(str, charset) + 1) 
			* sizeof(char *));
	array[0] = 0;
	if (!str)
		return (array);
	while (*str)
	{
		while (ft_isseperator(*str, charset))
			str++;
		if (!ft_isseperator(*str, charset))
		{
			array[i] = ft_get_word(str, charset);
			i++;
		}
		while (!ft_isseperator(*(str), charset) && *(str + 1) != 0)
			str++;
		str++;
	}
	array[i] = 0;
	return (array);
}
/*
//TEST: ===== from here testing begins ======
#include <stdio.h>
#include <stdlib.h>

void print_and_free_array(char **arr) {
    // Check if the array is NULL
    if (!(*arr)) {
        free(arr);  // Free each string
        printf("NULL\n");
        return;
    }

    // Print each string in the array
	int i = 0;
	while (arr[i])
	{
        printf("\"%s\"", arr[i]);
        if (arr[i + 1]) {
            printf(", ");
        }
        free(arr[i]);  // Free each string
		i++;
    }

    printf("\n");

    // Free the array itself
    free(arr);
}

int main() {
    char *str;
    char *charset;
    char **result;

    // Test 1: Basic Test
    str = "Hello World";
    charset = " ";
    printf("Expected output: ['Hello', 'World']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);
    
    // Test 2: Multiple delimiters in between words
    str = "Hello   World";
    charset = " ";
    printf("Expected output: ['Hello', 'World']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 3: Charset with multiple characters
    str = "Hello,World;Universe!";
    charset = ",;!";
    printf("Expected output: ['Hello', 'World', 'Universe']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 4: String starting with delimiters
    str = "   Hello World";
    charset = " ";
    printf("Expected output: ['Hello', 'World']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 5: String ending with delimiters
    str = "Hello World   ";
    charset = " ";
    printf("Expected output: ['Hello', 'World']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 6: Empty string
    str = "";
    charset = " ";
    printf("Expected output: []\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 7: Only delimiters in the string
    str = "   ";
    charset = " ";
    printf("Expected output: []\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 8: No delimiters in the string
    str = "HelloWorld";
    charset = " ";
    printf("Expected output: ['HelloWorld']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 9: Single character string and charset
    str = "H";
    charset = " ";
    printf("Expected output: ['H']\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 10: Single character string that's a delimiter
    str = " ";
    charset = " ";
    printf("Expected output: []\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 11: NULL string
    str = NULL;
    charset = " ";
    printf("Expected output: NULL or []\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 12: String with NULL charset
    str = "Hello World";
    charset = NULL;
    printf("Expected output: Hello World\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    // Test 13: Both NULL string and charset
    str = NULL;
    charset = NULL;
    printf("Expected output: NULL\n");
    result = ft_split(str, charset);
	print_and_free_array(result);

    return 0;
}
*/
