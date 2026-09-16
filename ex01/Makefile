# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/01 12:51:34 by vananiev          #+#    #+#              #
#    Updated: 2026/06/09 12:51:39 by vananiev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= ex01
CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
 
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp
OBJS	= $(SRCS:.cpp=.o)
 
all: $(NAME)
 
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
 
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJS)
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re
 