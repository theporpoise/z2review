/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:24 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 13:39:31 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/bisquick.h"
#include <stdio.h>

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


void	print_square(char **map)
{
	int i;
	int j;

	i = 1;
	while(map[i][j])
	{
		j = 0;
		while(map[i][j])
		{
			printf("%s", map[i][j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	**map;
	int		*mstats;
	int		j;

	j = 0;
	mstats = (int*)malloc(sizeof(int) * 4);
	i = 1;
	if (argc < 2)
	{
		map = bisquick(0);
		print_map(map);
	}
	else if (argc > 1)
	{
		while (argv[i])
		{
			map = bisquick(open(argv[i], O_RDONLY));
			//validmap
			//mapsize
			//largest square possible
			//timjose while loop
			print_map(map);
			mstats = map_stats(map);
			while (j < 5)
			{
				printf("mstats %d is %d", j, mstats[j]);
				j++
			}
			i++;
		}
	}
}
