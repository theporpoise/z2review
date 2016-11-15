# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/15 10:10:18 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = include
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER)
O = src/
L = lib/
SRC = mtest.c $(O)bisquick.c $(O)print_map.c $(O)map_stats.c $(O)timjose.c \
	$(O)fill_map.c $(L)linelen.c $(L)my_putstr.c $(L)my_strlen.c $(O)tj2.c
DEST = -o bsq

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f a.out

fclean: clean
	rm -fr a.out

re: fclean all
