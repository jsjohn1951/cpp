# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 22:14:10 by wismith           #+#    #+#              #
#    Updated: 2022/12/25 22:16:25 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS = main.cpp

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

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