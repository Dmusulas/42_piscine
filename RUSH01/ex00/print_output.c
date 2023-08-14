/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribragim <ribragim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:27:34 by ribragim          #+#    #+#             */
/*   Updated: 2023/07/30 21:26:39 by keramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_criteria(int *arr[])
{
	int	i;
	int	j;
	int	ans;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 3)
		{
			ans = arr[i][j] + 48;
			ft_putchar(ans);
			ft_putchar(' ');
		}
		ans = arr[i][j] + 48;
		ft_putchar(ans);
		ft_putchar('\n');
	}
}
