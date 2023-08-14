/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prchught <prchught@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:04:01 by prchught          #+#    #+#             */
/*   Updated: 2023/08/06 22:37:15 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

long long int	ft_input_validation(char *input)
{
	long long int	num;

	if (!ft_str_is_numeric(input))
	{
		return (-999);
	}
	if (ft_strlen(input) >= 20)
	{
		return (-999);
	}
	else
	{
		num = ft_atoi2(input);
	}
	return ((long long int) num);
}
