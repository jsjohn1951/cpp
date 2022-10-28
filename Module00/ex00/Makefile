# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 22:20:51 by wismith           #+#    #+#              #
#    Updated: 2022/10/25 16:45:32 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

LIST = megaphone.cpp

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(LIST:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
