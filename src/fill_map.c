/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timjose.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:31:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/15 19:57:55 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"

char	**fill_map(char **map, int *pos, int *mstats)
{
	int i;
	int j;

	if (pos[0] == 0 && pos[1] == 0 && pos[2] == 0 &&
		map[1][0] != mstats[1])
	{
		map[1][0] = mstats[0];
	}
	i = 0;
	j = 0;
	while (i < pos[2])
	{
		j = 0;
		while (j < pos[2])
		{
			map[pos[0] + i][pos[1] + j] = mstats[0];
			j++;
		}
		i++;
	}
	return (map);
}
