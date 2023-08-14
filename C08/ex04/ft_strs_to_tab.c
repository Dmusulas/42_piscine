/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:44:48 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/09 21:42:30 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	int					i;

	i = 0;
	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
/*

#include <stdio.h>
#include "../ex05/ft_show_tab.c" // so illegal wow

void	ft_show_tab(struct s_stock_str *par);
int	main(int ac, char **av)
{
	struct s_stock_str	*rez;

	rez = ft_strs_to_tab(ac, av);
	ft_show_tab(rez);
	write(1, "\n", 1);
	while (rez->str)
	{
		printf("The current argument struct is: \n\tsize = %i; \n" 
				"\tstr = %s; pstr = %p \n\tcopy = %s; pcopy = %p \n" 
				"============== END =======================\n", rez->size, 
				rez->str, rez->str, rez->copy, rez->copy);
		rez++;
	}
	return (0);

}
*/
