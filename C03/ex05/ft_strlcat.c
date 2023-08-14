/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:45:11 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 17:36:55 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	n = ft_strlen(dest);
	src_len = ft_strlen(src);
	dest_len = n;
	if (size == 0 || size <= dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != 0 && i < size - 1 - dest_len)
	{
		dest[n++] = src[i++];
	}
	dest[n] = 0;
	return (dest_len + src_len);
}
/*

#include <bsd/string.h>
#include <stdio.h>
size_t	strlcat(char *dst, const char *src, size_t n);
int	main(void)
{
	char src [] = "aaaaA";
	char dest [6] = "AZZZZZ";
	printf("The concatination of string %s and %s", 
			src, dest);
	printf(" is %i\n", ft_strlcat(dest, src, 10));

	printf("The final destination is %s", dest);
	return (0);
}
*/
