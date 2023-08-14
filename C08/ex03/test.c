/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:35:04 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/09 13:36:39 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>
int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("x: %i, y: %i", point.x, point.y);
	return (0);
}
