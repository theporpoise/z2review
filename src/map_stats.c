/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:47:22 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 14:07:39 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <stdlib.h>

int	*map_stats(char **map)
{
	int x;
	int *map_stats;
	//i'm going to store the char values as ints and the size
	//of the map as an int.

	map_stats = (int*)malloc(sizeof(int) * 5);
	x = 0;
	while (map[x][0]) // check if more than 1 row
		x++;
	if (x == 1)
		return (0);
	map_stats[3] = (x - 1); //number of rows
	x = 0;
	while (map[0][x]) // check if 1st row has enough parameters
		x++;
	if (x < 4)
		return (0);
	map_stats[0] = map[0][x - 1];  // the full / fill character
	map_stats[1] = map[0][x - 2]; // the obstacle character
	map_stats[2] = map[0][x - 3]; // the empty character
	x = 0;
	while (map[1][x])
	{
		x++;
	}
	map_stats[4] = x; // length of each row.

	return (map_stats);
}
