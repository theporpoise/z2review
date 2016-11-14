/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:27:24 by mgould            #+#    #+#             */
/*   Updated: 2016/11/14 09:34:29 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// bsquare

// max_size

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
			map = bisquick(argv[i]);
			bsquare(map);
		}
	}
}
