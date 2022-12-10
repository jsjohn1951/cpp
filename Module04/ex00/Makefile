# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 15:28:25 by wismith           #+#    #+#              #
#    Updated: 2022/12/10 16:26:18 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS = srcs/Animal \
	srcs/Dog \
	main \
	srcs/Cat \
	srcs/WrongAnimal \
	srcs/WrongCat \
	tests/tests \

OBJDIR = objects

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRCS)))

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJDIR)/srcs
	@mkdir -p $(OBJDIR)/tests
	$(CXX) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean all