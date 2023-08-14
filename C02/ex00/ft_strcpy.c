/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:20:09 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 14:42:14 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*initial_pdest;

	initial_pdest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (initial_pdest);
}

#include <stdio.h>
#include <string.h>
char *strcpy(char * dest, const char *src);
int main()
{
	char src[] = "volet";
	char dest[] = "beach";
	printf("The initial src is %s\n", src);
	printf("The initial dest is %s\n", dest);

	char *last_ptr = ft_strcpy(dest, src);
	printf("The initial src is %s\n", src);
	printf("The initial dest is %s\n", dest);
	printf("The final pointer is %p", last_ptr);

}
