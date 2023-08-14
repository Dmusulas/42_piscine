/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:17:17 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/02 16:49:00 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("The fibonacci number at index %i is %i\n",
				arr[i], ft_fibonacci(arr[i]));
	}
	return (0);

}
*/
