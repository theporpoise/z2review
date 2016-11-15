/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tj2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:56:47 by mgould            #+#    #+#             */
/*   Updated: 2016/11/15 13:39:56 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <stdlib.h>
#include <stdio.h>

int	max_square(char **map, int i, int j, int *mstats)
{
	int sq;
	int temp1;
	int temp2;

	sq = 0;
	if (map[i][j] != mstats[2])
		return (sq);
	while (map[i + sq] && map[1][j + sq])
	{
		temp1 = 0;
		while (temp1 < sq)
		{
			temp2 = 0;
			while (temp2 < sq)
			{
				if (map[i + temp1][j + temp2] != mstats[2])
					return (sq - 1);
				temp2++;
			}
			temp1++;
		}
		sq++;
	}
	return (sq - 1);
}

int	*tj2(char **map, int *mstats)
{
	int *pos;
	int i;
	int j;

	pos = (int*)malloc(sizeof(int) * 3);
	i = 1;
	pos[0] = 0;
	pos[1] = 0;
	pos[2] = 0;
	while (map[i] && (i < mstats[3]))
	{
		j = 0;
		while (map[1][j])
		{
			if (max_square(map, i, j, mstats) > pos[2])
			{
				pos[0] = i;
				pos[1] = j;
				pos[2] = max_square(map, i, j, mstats);
			}
			j++;
		}
		i++;
	}
	return (pos);
}
