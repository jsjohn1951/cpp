# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 15:49:30 by wismith           #+#    #+#              #
#    Updated: 2022/12/29 15:52:08 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS = main.cpp Span.cpp

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

.PHONY : all clean fclean re