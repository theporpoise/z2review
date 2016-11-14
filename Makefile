# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/14 15:47:11 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = include
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER)
O = src/
L = lib/
SRC = main.c $(L)my_strcat.c $(L)rec_strlen.c $(O)bisquick.c $(L)rec_putstr.c \
	 $(O)print_map.c $(O)map_stats.c $(O)timjose.c $(O)fill_map.c
DEST = -o bsq

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f a.out

fclean: clean
	rm -fr a.out

re: fclean all
