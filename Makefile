# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/14 12:24:57 by bmiller          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = include
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER)
O = src/
L = lib/
SRC = main.c $(L)my_strcat.c $(L)rec_strlen.c $(O)bisquick.c $(L)rec_putstr.c $(O)print_map.c
DEST = -o a.out

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f ft_display_file

fclean: clean
	rm -fr ft_display_file

re: fclean all
