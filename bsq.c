/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:37:54 by mgould            #+#    #+#             */
/*   Updated: 2016/11/16 14:55:32 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	instd(void)
{
	char	*map;
	int		*dims;
	char	**map_a;
	int		*mstats;
	int		*pos;

	map = bisquick_in(0);
	dims = dimensions(map);
	map_a = bisquick(map, dims[0], dims[1]);
	if (validate(dims, map, map_a))
		return ;
	mstats = map_stats(map_a);
	if (validate_rows(map_a, mstats))
		return ;
	pos = tj3(map_a, mstats);
	map_a = fill_map(map_a, pos, mstats);
	print_map(map_a);
}

int		main(int argc, char **argv)
{
	char	*map;
	int		*dims;
	char	**map_a;
	int		*mstats;
	int		i;

	i = 0;
	if (argc >= 2)
	{
		while (++i < argc)
		{
			map = bisquick_in(open(argv[i], O_RDONLY));
			if (!map || !(dims = dimensions(map)))
				continue;
			map_a = bisquick(map, dims[0], dims[1]);
			mstats = map_stats(map_a);
			if (validate(dims, map, map_a) || validate_rows(map_a, mstats))
				continue;
			map_a = fill_map(map_a, tj3(map_a, mstats), mstats);
			print_map(map_a);
		}
	}
	else
		instd();
	return (0);
}
