/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_rows.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:39:37 by mgould            #+#    #+#             */
/*   Updated: 2016/11/16 11:39:40 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <unistd.h>

int	validate_rows(char **map, int *mstats)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (map[i] && (i < mstats[3]))
	{
		j = 0;
		while (map[1][j])
		{
			if (!(map[i][j] == mstats[0] || map[i][j] == mstats[1] ||
				map[i][j] == mstats[2] || map[i][j] == '\n'
				|| map[i][j] == '\0'))
			{
				write(2, "map error\n", 10);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
