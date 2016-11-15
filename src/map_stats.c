/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:47:22 by mgould            #+#    #+#             */
/*   Updated: 2016/11/15 13:55:16 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <stdlib.h>

int	*map_stats(char **map)
{
	int x;
	int *map_stats;

	map_stats = (int*)malloc(sizeof(int) * 5);
	x = 0;
	while (map[x][0])
		x++;
	if (x == 1)
		return (0);
	map_stats[3] = (x - 1);
	x = 0;
	while (map[0][x])
		x++;
	if (x < 4)
		return (0);
	map_stats[0] = map[0][x - 2];
	map_stats[1] = map[0][x - 3];
	map_stats[2] = map[0][x - 4];
	x = 0;
	while (map[1][x])
	{
		x++;
	}
	map_stats[4] = x;
	return (map_stats);
}
