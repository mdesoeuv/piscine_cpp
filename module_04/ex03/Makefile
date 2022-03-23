# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 15:56:17 by mdesoeuv          #+#    #+#              #
#    Updated: 2022/03/23 13:38:56 by mdesoeuv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := FFVII

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -g3

DEBUG := -fsanitize=address		
		
SRCS := AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		ICharacter.cpp \
		main.cpp

OBJS := $(SRCS:.cpp=.o)

OBJS_DIR := objs/

OBJS_FILES := $(addprefix $(OBJS_DIR), $(OBJS))

all : $(NAME)

$(NAME) :	$(OBJS_FILES)
			$(CXX) $(CXXFLAGS) $(OBJS_FILES) -o $(NAME)

$(OBJS_DIR)%.o :	%.cpp Makefile AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp
					mkdir -p $(OBJS_DIR)
					$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJS_DIR)

fclean :	clean
			rm -f $(NAME)

re :	fclean all

.PHONY :	all clean fclean re