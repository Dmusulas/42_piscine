/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:37:42 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/08 18:55:38 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_str_lens(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	if (!strs)
		return (0);
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		total += ft_strlen(sep);
		i++;
	}
	total -= ft_strlen(sep);
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != 0)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*final;
	int		i;

	total_length = count_str_lens(size, strs, sep);
	if (size == 0 || !total_length)
	{
		final = ((char *) malloc(1 * sizeof(char)));
		final[0] = '\0';
		return (final);
	}
	final = (char *) malloc(total_length * sizeof(char));
	final[0] = '\0';
	if (!final)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(final, strs[i]);
		if (i != size - 1)
			ft_strcat(final, sep);
		i++;
	}
	final[total_length - 1] = '\0';
	return (final);
}
/*
#include <stdio.h>
int main() {
    // Test Case 1: Basic functionality
    {
        char *strings[] = {"Hello", "world"};
        char *separator = "-";
        char *result = ft_strjoin(2, strings, separator);
        printf("Test Case 1: Expected: 'Hello-world', Got: '%s'\n", result);
        free(result);
    }
    
    // Test Case 2: Multiple strings
    {
        char *strings[] = {"apple", "banana", "cherry", "date"};
        char *separator = ", ";
        char *result = ft_strjoin(4, strings, separator);
        printf("Test Case 2: Expected: 'apple, banana, cherry, date', Got: '%s'\
				\n", result);
        free(result);
    }

    // Test Case 3: No separator
    {
        char *strings[] = {"apple", "banana", "cherry"};
        char *separator = "";
        char *result = ft_strjoin(3, strings, separator);
        printf("Test Case 3: Expected: 'applebananacherry', Got: `%s`\n",
		result);
        free(result);
    }

    // Test Case 4: Empty strings
    {
        char *strings[] = {"apple", "", "cherry"};
        char *separator = "-";
        char *result = ft_strjoin(3, strings, separator);
        printf("Test Case 4: Expected: `apple--cherry`, Got: `%s`\n", result);
        free(result);
    }

    // Test Case 5: Empty array and separator
    {
        char **strings = NULL;
        char *separator = "";
        char *result = ft_strjoin(0, strings, separator);
        printf("Test Case 5: Expected:`` , Got: `%s`\n", result);
        free(result);
    }

    // Test Case 6: NULL as one of the strings
    {
        char *strings[] = {"apple", "cherry"};
        char *separator = "-";
        // This should likely cause undefined behavior, as the code doesn't 
		// check for NULL within the strings array.
        // You'd typically want to add a check within the ft_strjoin function.
        char *result = ft_strjoin(2, strings, separator);
        printf("Test Case 6: Expected: `apple-cherry`, Got: `%s`\n", result);
        free(result);
    }

    return 0;
}
*/
