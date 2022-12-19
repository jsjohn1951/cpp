# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 12:26:48 by wismith           #+#    #+#              #
#    Updated: 2022/12/19 21:06:34 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS = main \
	srcs/Bureaucrat \
	srcs/AForm \
	srcs/PresidentialPardonForm \
	srcs/ShrubberyCreationForm \
	srcs/RobotomyRequestForm \
	srcs/Intern \
	tests/tests \

OBJDIR = objects

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

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

.PHONY: all clean fclean re