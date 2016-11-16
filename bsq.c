#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*map;
	int		*dims;
	char	**map_a;
	int		*mstats;
	int		i;
	int		*pos;

	i = 1;
	if (argc >= 2)
	{
		while(argv[i])
		{
		map = bisquick_in(open(argv[i], O_RDONLY));
		dims = dimensions(map);
		map_a = bisquick(map, dims[0], dims[1]);
		mstats = map_stats(map_a);
		pos = tj2(map_a, mstats);
		map_a = fill_map(map_a, pos, mstats);
		print_map(map_a);
		i++;
		}
	}
	else
	{
	printf("one\n");
	map = bisquick_in(0);
	printf("two\n");
	dims = dimensions(map);
	printf("three\n");
	map_a = bisquick(map, dims[0], dims[1]);
	printf("four\n");
	mstats = map_stats(map_a);
	printf("five\n");
	pos = tj2(map_a, mstats);
	printf("sixe\n");
	map_a = fill_map(map_a, pos, mstats);
	printf("seven\n");
	print_map(map_a);
	}

	return (0);
}
