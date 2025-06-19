# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 18:25:47 by miyuu             #+#    #+#              #
#    Updated: 2025/06/18 20:20:21 by miyuu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
SRCS = \
		main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp
HEADERS = \
		ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# ========== File Dependency ========== #

$(OBJS): $(HEADERS)
