/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:59:09 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/27 20:38:17 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
size_t strlen(const char *s);
int main()
{
	char *str[] = {"Test", "42 is amazing", "Berlin is beautiful"};
	for (unsigned int i = 0; i < 3; i++) 
	{
		printf("The length of string '%s' according to my implmenetation is %i\n", 
		str[i], ft_strlen(str[i]));
		printf("The length of string '%s' according to glibc is %zu\n",
		str[i], strlen(str[i]));
	
	}
	return (0);
}
*/
