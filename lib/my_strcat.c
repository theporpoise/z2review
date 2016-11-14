/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:35:10 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/14 10:03:26 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bisquick.h"

char	*my_strcat(char *dest, char *src)
{
	if (*src)
	{
		*(dest + rec_strlen(dest)) = *src;
		my_strcat(dest, (src + 1));
	}
	else
		*(dest + rec_strlen(dest)) = '\0';
	return dest;
}
