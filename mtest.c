#include <stdio.h>
#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	char	*map;
	int		*dims;
	char	**map_a;
	int		*mstats;
	int		i;
	int		*pos;


	i = 0;
	if (argc >= 2)
		map = bisquick_in(open(argv[1], O_RDONLY));
	else
		map = bisquick_in(0);
	dims = dimensions(map);
	map_a = bisquick(map, dims[0], dims[1]);
	print_map(map_a);
	mstats = map_stats(map_a);
	while (i < 5)
	{
		printf("mstats %d is:%d\n", i, mstats[i]);
		i++;
	}
	pos = tj2(map_a, mstats);
	printf("pos x is:%d, pos y is:%d\n", pos[0], pos[1]);
	map_a = fill_map(map_a, pos, mstats);
	print_map(map_a);


	return (0);
}
