/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:35:10 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/14 09:31:52 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bisquick.h"

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