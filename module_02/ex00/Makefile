# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 14:30:05 by mdesoeuv          #+#    #+#              #
#    Updated: 2022/03/22 13:10:06 by mdesoeuv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := Fixed

CC := c++

CFLAGS := -Wall -Werror -Wextra -g3 -std=c++98

#DEBUG := -fsanitize=address

SRCS := Fixed.cpp \
		main.cpp
		

OBJS := $(SRCS:.cpp=.o)

OBJS_DIR := objs/

OBJS_FILES := $(addprefix $(OBJS_DIR), $(OBJS))

$(OBJS_DIR)%.o :	%.cpp Fixed.hpp Makefile
					mkdir -p $(OBJS_DIR)
					$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

all :	$(NAME) 

$(NAME) :	$(OBJS_FILES) 
			$(CC) $(CFLAGS) $(DEBUG) $(OBJS_FILES) -o $(NAME)
		
clean :
		rm -rf $(OBJS_DIR)

fclean :	clean
			rm -f $(NAME)

re :	fclean
		$(MAKE) all