/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:24 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 10:47:01 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/bisquick.h"
#include <stdio.h>

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


void print_square(char *map)
{
	printf("map is:\n%s", map);
}

// how big is square
// what is the obstacle char

// parse_first_line

int	valid_map(char *map)
{
	int i;
	int count;
	int line;

	line = 0;
	i = 0;
	count = 0;
	while (map[i])
	{
		while (map[count] != '\n')
		{
			count++;
		}
		if (line > 0)
		line = 1;
		count = 0;
	}
}

int	*map_stats(char *map)
{
	int	*mstats;
	int i;

	i = 0;
	while (mstats)

}

int	main(int argc, char **argv)
{
	int		i;
	char	*map;
	int		*mstats;

	mstats = (int*)malloc(sizeof(int) * 4);
	i = 1;
	if (argc < 2)
	{
		map = bisquick(0);
		print_square(map);
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
			print_square(map);
			mstats = map_stats(map);
			i++;
		}
	}
}
