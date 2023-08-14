/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 22:49:00 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/05 22:49:18 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_atoi2(char *str)
{
	long long int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}
