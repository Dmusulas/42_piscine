/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:02:06 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/25 19:55:06 by dmusulas         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
	}
	return (src_length);
}
/*
#include <stdio.h>
#include <bsd/string.h> // also need to compile with -lbsd

size_t strlcpy(char *dst, const char *src, size_t siz);
int main()
{
	char src[] = "Volet";
	char dest[] = "Beach";


	printf("The initial src is %s\n", src);
	printf("The initial dest is %s\n", dest);

	unsigned int len = ft_strlcpy(dest, src, 5);
	size_t length_t = strlcpy(dest, src, 5);
	printf("Value after func src is %s\n", src);
	printf("Value after func dest  is %s\n", dest);
	printf("Len of the src str  %i\n\n", len);
	printf("Len of the src str  %zu\n\n", length_t);

}
*/
