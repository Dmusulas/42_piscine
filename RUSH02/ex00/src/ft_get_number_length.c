/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number_length.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshublad <nshublad@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:01:31 by nshublad          #+#    #+#             */
/*   Updated: 2023/08/05 16:07:48 by nshublad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_number_length(long long int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
	long long int a;
	a = 1000000000000;

	printf("%d", ft_get_number_length(a));
	return (0);
}*/
