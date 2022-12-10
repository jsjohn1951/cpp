# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 15:12:54 by wismith           #+#    #+#              #
#    Updated: 2022/12/10 14:13:23 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS = main \
	srcs/AMateria \
	srcs/Character \
	srcs/Cure \
	srcs/Ice \
	srcs/ICharacter \
	srcs/IMateriaSource \
	srcs/MateriaSource \
	tests/tests \
	

CXX = c++

CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

OBJDIR = objects

OBJ = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRCS)))

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJDIR)/srcs
	@mkdir -p $(OBJDIR)/tests
	$(CXX) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all 

.PHONY: all clean fclean re