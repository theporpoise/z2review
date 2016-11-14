# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 14:05:57 by mgould            #+#    #+#              #
#    Updated: 2016/11/14 09:48:37 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = /include/bisquick.h
FLAG = -Wall -Wextra -Werror
OPTION = -I $(HEADER)
O = srcs/
SRC = ft_main.c $(O)strcat.c $(O)bisquick.c
DEST = -o a.out

all:
	gcc $(FLAG) $(OPTION) $(SRC) $(DEST)

clean:
	rm -f ft_display_file

fclean: clean
	rm -fr ft_display_file

re: fclean all
