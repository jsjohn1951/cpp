# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 16:57:31 by wismith           #+#    #+#              #
#    Updated: 2022/11/28 15:05:57 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS = main\
	Fixed\

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