/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:31:41 by dmusulas          #+#    #+#             */
/*   Updated: 2023/08/06 22:19:00 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_str_is_numeric(char *str);
int				ft_char_is_numeric(char c);
int				ft_atoi(char *str);
int				ft_strlen(char *str);
char			**ft_split(char *str);
int				parse_dict(char *file_path, long long int *key_array,
					char **val_array);
long long int	ft_input_validation(char *input);
int				parse_nmbr(long long int nbr, long long int *key_array,
					char *value_array[], int *recurse);
long long int	ft_atoi2(char *input);
char			**create_array_char(char *file_path);
long long int	*create_array_int(char *file_path);
