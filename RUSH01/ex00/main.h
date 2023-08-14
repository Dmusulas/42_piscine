/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keramos- <keramos-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:18:30 by keramos-          #+#    #+#             */
/*   Updated: 2023/07/30 21:19:44 by keramos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_str(char *str);
int	**ft_arr_split(char *str, int table_size);
int	ft_solve(int *constrains[], int *solved_board[], int row, int col);
int	**init_2d_array(int size);
