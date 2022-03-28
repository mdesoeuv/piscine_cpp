# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 15:56:17 by mdesoeuv          #+#    #+#              #
#    Updated: 2022/03/28 11:13:52 by mdesoeuv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := FFVII

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -g3

#DEBUG := -fsanitize=address		
		
SRCS := AMateria.cpp \
		ICharacter.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		IMateriaSource.cpp \
		MateriaSource.cpp \
		main.cpp

OBJS := $(SRCS:.cpp=.o)

OBJS_DIR := objs/

OBJS_FILES := $(addprefix $(OBJS_DIR), $(OBJS))

all : $(NAME)

$(NAME) :	$(OBJS_FILES)
			$(CXX) $(CXXFLAGS) $(DEBUG) $(OBJS_FILES) -o $(NAME)

$(OBJS_DIR)%.o :	%.cpp Makefile AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
					mkdir -p $(OBJS_DIR)
					$(CXX) $(CXXFLAGS) $(DEBUG) -c $< -o $@

clean :
		rm -rf $(OBJS_DIR)

fclean :	clean
			rm -f $(NAME)

re :	fclean all

.PHONY :	all clean fclean re