/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:03:08 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 15:07:48 by dmusulas         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != 0 && i < nb)
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
char	*strncat(char *dest, const char *src, size_t n);
int	main(void)
{
	char src [] = "aaaaA";
	char dest [] = "AZZZZZ";
	printf("The concatination of string %s and %s", 
			src, dest);
	printf(" is %s", ft_strncat(dest, src, 3));
	return (0);
}
*/
