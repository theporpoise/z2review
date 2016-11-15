/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:43 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/15 10:11:05 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISQUICK_H
# define BISQUICK_H
#include <stdlib.h>

char	**bisquick(char *in_str, size_t x_dim, size_t y_dim);
char	*bisquick_in(int rfd);
int		*dimensions(char *in_str);
int		my_strlen(char *str);
void	print_map(char **map);
void	my_putstr(char *str);
int		*map_stats(char **map);
int		linelen(char *str);
char	**fill_map(char **map, int *pos, int *mstats);
int		*timjose(char **map, int *mstats);
int		*tj2(char **map, int *mstats);
#endif
