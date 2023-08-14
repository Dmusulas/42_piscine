/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:14:33 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 15:37:11 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <string.h>
#include <stdio.h>
char *strncpy(char * dest, const char *src, size_t n);
int main()
{
	char *last_ptr;
	// case with two equally sized strs and copying only 3 bytes
	char src[] = "Volet";
	char dest[] = "";


	printf("The initial src is %s\n", src);
	printf("The initial dest is %s\n", dest);
	printf("Pointer of dest  %p\n", dest);

	last_ptr = ft_strncpy(dest, src, 3);
	printf("Value after func src is %s\n", src);
	printf("Value after func dest  is %s\n", dest);
	printf("Pointer of dest  %p\n\n", last_ptr);
}
