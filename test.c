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

	if (argc >= 2)
		map = bisquick_in(open(argv[1], O_RDONLY));
	else
		map = bisquick_in(0);
	dims = dimensions(map);
	print_map(bisquick(map, dims[0], dims[1]));
	return (0);
}
