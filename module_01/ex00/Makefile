# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 11:20:30 by mdesoeuv          #+#    #+#              #
#    Updated: 2022/03/18 09:22:45 by mdesoeuv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := BraiiiiiiinnnzzzZ

CC := c++ 

CFLAGS := -Wall -Wextra -Werror -std=c++98

#DEBUG := -fsanitize=address -g3

SRCS :=	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

OBJS := $(SRCS:.cpp=.o)

OBJS_DIR := objs/

OBJS_FILES := $(addprefix $(OBJS_DIR), $(OBJS))

all : $(NAME)

$(NAME) :	$(OBJS_FILES)
			$(CC) $(CFLAGS) $(DEBUG) $(OBJS_FILES) -o $(NAME)

objs/%.o :	%.cpp Zombie.hpp Makefile
			mkdir -p $(OBJS_DIR)
			$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

clean :
		rm -rf $(OBJS_DIR)
		
fclean :	clean 
			rm -f $(NAME)
		
re :	fclean
		$(MAKE) all
	
.PHONY : all clean fclean re
