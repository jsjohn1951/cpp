# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 22:20:51 by wismith           #+#    #+#              #
#    Updated: 2022/10/28 12:49:01 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main\

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJDIR = Objects

OBJ = $(addprefix $(OBJDIR)/, $(addsuffix .o , $(SRCS)))

$(OBJDIR)/%.o : %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
