/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timjose.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:31:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 15:37:33 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"

char	**fill_map(char **map, int *pos, int *mstats)
{
	int i;
	int j;

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
