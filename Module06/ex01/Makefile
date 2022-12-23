# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 21:58:39 by wismith           #+#    #+#              #
#    Updated: 2022/12/23 22:02:34 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re