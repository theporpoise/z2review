/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 09:19:24 by mgould            #+#    #+#             */
/*   Updated: 2016/11/16 22:13:35 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"

void	first_row(char **map, int *pos, int *mstats)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if ((pos[0] == 0 && pos[1] == 0 && pos[2] == 0))
	{
		while ((i < mstats[4]) && (j < 1))
		{
			if (map[1][i] == mstats[2])
			{
				j = 1;
				map[1][i] = mstats[0];
			}
			i++;
		}
	}
}

char	**fill_map(char **map, int *pos, int *mstats)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (map[1][0] == '\n')
		map[1][0] = '\0';
	first_row(map, pos, mstats);
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
