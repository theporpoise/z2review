/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tj2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:56:47 by mgould            #+#    #+#             */
/*   Updated: 2016/11/15 11:55:03 by mgould           ###   ########.fr       */
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
	{
		printf("%d ", sq);
		return (sq);
	}
	while (map[i + sq] && map[1][j + sq])
	{
		temp1 = 0;
		while (temp1 < sq)
		{
			temp2 = 0;
			while (temp2 < sq)
			{
				if (map[i + temp1][j + temp2] != mstats[2])
				{
					printf("%d ", (sq-1));
					return (sq - 1);
				}
				temp2++;
			}
			temp1++;
		}
	sq++;
	}
	printf("%d ", (sq-1));
	return (sq - 1);
}

int	*tj2(char **map, int *mstats)
{
	int flag;
	int *pos;
	int i;
	int j;

	pos = (int*)malloc(sizeof(int) * 3);
	i = 1;
	j = 0;
	// are we going to get rid of the first line of input?
	// if so, set pos[0] to 0 to start at 0 row.
	pos[0] = 0; //holds row where answser is
	pos[1] = 0; //holds column where answer is
	pos[2] = 0; //will hold max size
	while (map[i] && (i < mstats[3]))
	{
		j = 0;
		while (map[1][j])
		{
			flag = max_square(map, i, j, mstats);
			if (flag > pos[2])
			{
				pos[0] = i;
				pos[1] = j;
				pos[2] = flag;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	 printf("bsq:%d, x:%d, y:%d", pos[2], pos[0], pos[1]);
	return (pos);
}
