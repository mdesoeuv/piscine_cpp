# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 15:56:17 by mdesoeuv          #+#    #+#              #
#    Updated: 2022/03/23 16:08:54 by mdesoeuv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := AbstractAnimals

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -g3

DEBUG := -fsanitize=address		
		
SRCS := Bureaucrat.cpp \
		main.cpp

OBJS := $(SRCS:.cpp=.o)

OBJS_DIR := objs/

OBJS_FILES := $(addprefix $(OBJS_DIR), $(OBJS))

all : $(NAME)

$(NAME) :	$(OBJS_FILES)
			$(CXX) $(CXXFLAGS) $(DEBUG) $(OBJS_FILES) -o $(NAME)

$(OBJS_DIR)%.o :	%.cpp Makefile Dog.hpp Cat.hpp Animal.hpp Brain.hpp
					mkdir -p $(OBJS_DIR)
					$(CXX) $(CXXFLAGS) $(DEBUG) -c $< -o $@

clean :
		rm -rf $(OBJS_DIR)

fclean :	clean
			rm -f $(NAME)

re :	fclean all

.PHONY :	all clean fclean re