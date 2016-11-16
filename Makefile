# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/16 11:45:23 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = include
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER)
O = src/
L = lib/
SRC = bsq.c $(O)bisquick.c $(O)print_map.c $(O)map_stats.c \
	$(O)fill_map.c $(L)linelen.c $(L)my_putstr.c $(L)my_strlen.c  \
	$(O)my_atoi.c $(O)tj3.c $(O)validate_rows.c
DEST = -o bsq

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f bsq.o

fclean: clean
	rm -fr bsq

re: fclean all
