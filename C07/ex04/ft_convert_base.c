/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:19:28 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/09 21:36:12 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_is_valid(char *base);
int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != 0 && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest);
}

int	find_size_for_str(int nbr, int base_len)
{
	int	i;

	i = 0;
	if (nbr == 1 && base_len == 1)
		return (1);
	while (nbr > 0)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

int	ft_putnbr_base(int nbr, char *base, char *new_str)
{
	int		base_len;

	base_len = ft_strlen(base);
	if (base_len < 2 || *base == '\0')
		return (0);
	if (nbr < 0)
	{
		ft_strncat(new_str, "-", 1);
		if (nbr <= -base_len)
			ft_putnbr_base(-(nbr / base_len), base, new_str);
		ft_strncat(new_str, &base[-(nbr % base_len)], 1);
	}
	else if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base, new_str);
		ft_strncat(new_str, &base[nbr % base_len], 1);
	}
	else
		ft_strncat(new_str, &base[nbr], 1);
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr2;
	char	*converted;
	int		new_str_len;

	nbr2 = ft_atoi_base(nbr, base_from);
	if (!ft_is_valid(base_from) || !ft_is_valid(base_to) || nbr2 == 0)
		return (NULL);
	new_str_len = find_size_for_str(nbr2, ft_strlen(base_to)) + 1;
	converted = malloc(new_str_len * sizeof(char));
	if (!converted)
		return (NULL);
	converted[0] = 0;
	if (!ft_putnbr_base(nbr2, base_to, converted))
		return (NULL);
	return (converted);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%s\n", ft_convert_base("t", "^t", "P"));
    // Test 1: Basic Conversion from Base 10 to Base 2
    printf("%s\n", ft_convert_base("5", "0123456789", "01")); 
	// Expected output: 101

    // Test 2: Basic Conversion from Base 16 to Base 10
    printf("%s\n", ft_convert_base("A", "0123456789ABCDEF", "0123456789")); 
	// Expected output: 10

    // Test 3: Base 2 to Base 16 Conversion
    printf("%s\n", ft_convert_base("1101", "01", "0123456789ABCDEF")); 
	// Expected output: D

    // Test 4: NULL values
    printf("%s\n", ft_convert_base(NULL, "0123456789", "01")); 
	// Expected behavior: handle gracefully

    printf("%s\n", ft_convert_base("5", NULL, "01")); 
	// Expected behavior: handle gracefully

    printf("%s\n", ft_convert_base("5", "0123456789", NULL)); 
	// Expected behavior: handle gracefully

    // Test 5: Invalid Bases
    printf("%s\n", ft_convert_base("5", "01234456789", "01")); 
	// Invalid base_from, handle error
    printf("%s\n", ft_convert_base("5", "0123456789", "011")); 
	// Invalid base_to, handle error

    // Test 6: Number outside of the Base's range
    printf("%s\n", ft_convert_base("Z", "0123456789", "01")); 
	// Number not in base_from, handle error

    // Test 7: Large number Conversion
    printf("%s\n", ft_convert_base("1234567890", "0123456789",
	"0123456789ABCDEF")); 
	// Check for potential issues

    // Test 8: Conversion with Base having negative values
    printf("%s\n", ft_convert_base("-5", "012345-7", "01")); // Check behavior
	return(0);
}
*/
