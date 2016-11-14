/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:19:59 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/14 12:00:18 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char		**bisquick(int rfd)
{
	int		i[3];
	char	buf[1];
	size_t	bytes_read;
	char	**map;

	map = (char**)(malloc(sizeof(char*) * 2));
	i[0] = 0;
	while ((bytes_read = read(rfd, buf, 1)))
	{
		i[2] = 0;
		while (i[2] < (int)bytes_read)
		{
			in = my_strcat(map[i[1]], (char*)(malloc(1)));
			map[i[1]][i[0]] = buf[i[2]];
			if (buf[i[2]] == '\n')
				i[1]++;
			i[2]++;
			j[0]++;
		}
	}
	return (map);
}
