/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:24 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 10:07:29 by mgould           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		i;
	char	*map;

	i = 1;
	if (argc < 2)
		map = bisquick(0);
	else if (argc > 1)
	{
		while (argv[i])
		{
			map = bisquick(open(argv[i], O_RDONLY));
			print_square(map);
			i++;
		}
	}
}
