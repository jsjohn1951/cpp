# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 22:47:48 by wismith           #+#    #+#              #
#    Updated: 2022/12/27 12:22:26 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRCS = main.cpp Test.cpp

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g

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