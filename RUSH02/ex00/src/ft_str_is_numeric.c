/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:52:26 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 14:41:42 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
			return (0);
		str++;
	}
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (c >= 0x30 && c <= 0x39)
	{
	}
	else
		return (0);
	return (1);
}
