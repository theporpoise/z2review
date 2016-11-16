/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:19:59 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/16 08:08:05 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char		*bisquick_in(int rfd)
{
	int		i;
	int		j;
	char	buf[1];
	size_t	bytes_read;
	char	*in;

	if (rfd == -1)
		return (NULL);
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
	int		i;
	char	**arr;

	i = 0;
	arr = (char**)(malloc(sizeof(char*) * y_dim + 1));
	while (i <= (int)y_dim)
	{
		arr[i] = (char*)(malloc((x_dim + 1)));
		i++;
	}
	bisquick_pop(&arr, in_str);
	return (arr);
}

int			validate(int *dims, char *bisquick_in, char **bisquick)
{
	if ((dims == NULL) || (bisquick_in == NULL) || bisquick[0][0] == '0') //|| \
//		(dims[1] - 1) != my_atoi(bisquick[0], 3))
	{
		my_putstr("map error\n");
		return (-1);
	}
	return (0);
}

void		bisquick_pop(char ***arr, char *in_str)
{
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 0;
	i = 0;
	while (*(in_str + i))
	{
		if (in_str[i] == '\n')
		{
			(*arr)[y][x] = in_str[i];
			(*arr)[y][x + 1] = '\0';
			y++;
			x = 0;
		}
		else
		{
			(*arr)[y][x] = in_str[i];
			x++;
		}
		i++;
	}
}
