/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timjose.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:31:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 15:32:45 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"

int	position_check(char **map, int *pos, int max_size)
{
	int i;
	int j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
	while (i < max_size)
	{
		j = 0;
		while (j < max_size)
		{
			if (map[pos[0] + i][pos[1] + j] != mstats[2])
			{
				flag = 1;
				return (flag);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	*timjose(char **map, int *mstats)
{
	int max_size;
	int flag;
	int *pos;

	pos = (int*)malloc(sizeof(int *3));
	// are we going to get rid of the first line of input?
	// if so, set pos[0] to 0 to start at 0 row.
	pos[0] = 1;
	pos[1] = 0;
	pos[2] = 0; //will hold max size
	flag = 0;
	if (mstats[4 > mstats[3]])
		max_size = mstats[3];
	else
		max_size = mstats[4];
	while (max_size > 0)
	{
		while ((pos[0] + max_size) < map_stats[3])
		{
			while ((pos[1] + max_size) < map_stats[4])
			{
				flag = position_check(map, pos, max_size);
				if (flag == 0)
				{
					pos[2] = max_size;
					return (pos);
				}
				pos[1] += 1;
			}
			pos[0] += 1;
			pos[1] = 0;
		}
		max_size--;
	}
	return (0);
}











