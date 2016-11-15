/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:43 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/15 03:51:30 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISQUICK_H
# define BISQUICK_H
#include <stdlib.h>

char	**bisquick(char *in_str, size_t x_dim, size_t y_dim);
char	*bisquick_in(int rfd);
int		*dimensions(char *in_str);
char	*my_strcat(char *dest, char *src);
int		rec_strlen(char *str);
void	print_map(char **map);
void	rec_putstr(char *str);
int		*map_stats(char **map);
int		linelen(char *str);
char	**fill_map(char **map, int *pos, int *mstats);
int		*timjose(char **map, int *mstats);
#endif
