/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:10:35 by dmusulas          #+#    #+#             */
/*   Updated: 2023/07/28 12:40:52 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	char *str[] = {"Test 1: test\n", 
	"Test2: 42 is amazing\n", "Test 3: Berlin is beautiful\n"};
	for (unsigned int i = 0; i < 3; i++) 
	{
		ft_putstr(str[i]);
	}
	return (0);
}
*/
