/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:19:59 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/15 04:49:14 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

char		*bisquick_in(int rfd)
{
	int		i;
	int		j;
	char	buf[1];
	size_t	bytes_read;
	char	*in;

	in = (char*)(malloc(900000000));
	j = 0;
	while ((bytes_read = read(rfd, buf, 1)))
	{
		i = 0;
		while (i < (int)bytes_read)
		{
			in[j] = buf[i];
			i++;
			j++;
		}
	}			
	return (in);
}

int			*dimensions(char *in_str)
{
	int		meta_offset;
	int		*dims;
	int		i;
	char	*temp;
	
	meta_offset = linelen(in_str) + 1;
	temp = (in_str + meta_offset);
	if ((rec_strlen(temp) % 2) != 0)
		return (NULL);
	dims = (int*)(malloc(sizeof(int) * 2));
	dims[1] = 1;
	dims[0] = linelen(temp);
	i = 0;
	while (*temp)
	{
		if (linelen(temp) != dims[0])
			return (NULL);
		temp += (linelen(temp) + 1);
		dims[1]++;
	}
	dims[0]++;
	dims[0]++;
	return (dims);
}

char		**bisquick(char *in_str, size_t x_dim, size_t y_dim)
{
	int		x;
	int		y;
	int		i;
	char	**arr;

	x = 0;
	y = 0;
	i = 0;
//	rec_putstr(in_str);
	arr = (char**)(malloc(sizeof(char*) * y_dim + 1));
	arr[y] = (char*)(malloc(x_dim + 1));
	while (in_str[i])
	{
		if (in_str[i] == '\n')
		{
			arr[y][x] = in_str[i];
			arr[y][x + 1] = '\0';
			y++;
			arr[y] = (char*)(malloc(x_dim + 1));
			x = 0;
		}
		arr[y][x] = in_str[i];
//		write(1, &arr[y][x], 1);
		i++;
		x++;
	}
	return (arr);
}
