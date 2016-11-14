# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/14 10:06:45 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = include
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER)
O = src/
L = lib/
SRC = main.c $(L)my_strcat.c $(L)rec_strlen.c $(O)bisquick.c
DEST = -o a.out

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f ft_display_file

fclean: clean
	rm -fr ft_display_file

re: fclean all
