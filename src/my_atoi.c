/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 07:45:25 by mgould            #+#    #+#             */
/*   Updated: 2016/11/16 08:06:10 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_atoi(char *str, int backup)
{
	int sign;
	int number;

	number = 0;
	//sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		return (-1)
		//sign = sign * -1;
		//str++;
	}
	else if (*str == '+')
		str++;
	while ((*str > 47) && (*str < 58) && ((str + 4) != '\0'))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number);
}
