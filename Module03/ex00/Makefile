# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 18:29:57 by wismith           #+#    #+#              #
#    Updated: 2022/12/02 17:35:00 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

SRCS = main \
	srcs/ClapTrap \
	tests/Tests

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJDIR = objects

OBJ = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRCS)))

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJDIR)/srcs
	@mkdir -p $(OBJDIR)/tests
	$(CXX) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re