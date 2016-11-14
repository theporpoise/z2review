/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:43 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/14 13:48:03 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISQUICK_H
# define BISQUICK_H

char	**bisquick(int rfd);
char	*my_strcat(char *dest, char *src);
int		rec_strlen(char *str);
void	print_map(char **map);
void	rec_putstr(char *str);
int		*map_stats(char **map);
#endif
