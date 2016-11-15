/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linelen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:46:25 by mgould            #+#    #+#             */
/*   Updated: 2016/11/15 05:52:42 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		linelen(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) && (*(str + i) != '\n'))
	{
		i++;
	}
	return (i);
}
