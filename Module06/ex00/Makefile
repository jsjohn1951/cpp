# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 15:53:20 by wismith           #+#    #+#              #
#    Updated: 2022/12/20 20:25:28 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJDIR = objects

SRCS = main \
	srcs/ConvScalar \

OBJ = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRCS)))

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJDIR)/srcs
	$(CXX) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re