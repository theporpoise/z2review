/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tj3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 09:48:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/16 17:26:15 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <stdlib.h>

int	max_square(char **map, int *p, int *mstats)
{
	int sq;
	int temp1;
	int temp2;

	sq = p[2];
	if (map[p[3]][p[4]] != mstats[2])
		return (sq);
	while (map[p[3] + sq] && map[1][p[4] + sq])
	{
		temp1 = 0;
		while (temp1 < sq)
		{
			temp2 = 0;
			while (temp2 < sq)
			{
				if (map[p[3] + temp1][p[4] + temp2] != mstats[2])
					return (sq - 1);
				temp2++;
			}
			temp1++;
		}
		sq++;
	}
	return (sq - 1);
}

int	*tj3(char **map, int *mstats)
{
	int *p;

	p = (int*)malloc(sizeof(int) * 5);
	p[0] = 0;
	p[1] = 0;
	p[2] = 0;
	p[3] = 1;
	while (map[p[3]] && (p[3] < mstats[3]))
	{
		p[4] = 0;
		while (map[1][p[4]])
		{
			if (max_square(map, p, mstats) > p[2])
			{
				p[0] = p[3];
				p[1] = p[4];
				p[2] = max_square(map, p, mstats);
			}
			p[4]++;
		}
		p[3]++;
	}
	return (p);
}
