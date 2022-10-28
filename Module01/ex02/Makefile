# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 14:10:27 by wismith           #+#    #+#              #
#    Updated: 2022/10/28 18:09:54 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS = main.cpp \


OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re