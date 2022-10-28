# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 16:44:58 by wismith           #+#    #+#              #
#    Updated: 2022/10/28 18:09:12 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

SRCS = main \
	Weapon \
	HumanA \
	HumanB \

OBJDIR = objects

OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRCS)))

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re