/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bisquick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:19:59 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/14 09:57:19 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char		*bisquick(int rfd)
{
	int		i;
	int		j;
	char	buf[1];
	size_t	bytes_read;
	char	*in;

	in = (char*)(malloc(2));
	j = 0;
	while ((bytes_read = read(rfd, buf, 1)))
	{
		i = 0;
		while (i < (int)bytes_read)
		{
			in = my_strcat(in, (char*)(malloc(1)));
			in[j] = buf[i];
			i++;
			j++;
		}
	}
	return (in);
}
