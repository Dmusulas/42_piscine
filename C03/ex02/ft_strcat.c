/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:51:02 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 15:01:56 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*

#include <string.h>
#include <stdio.h>
char	*strcat(char *dest, const char *src);
int	main(void)
{
	char src [] = "AZ";
	char dest [] = "AZZZZZ";
	printf("The concatination of string %s and %s", 
			src, dest);
	printf(" is %s", ft_strcat(dest, src));
	return (0);
}
*/
