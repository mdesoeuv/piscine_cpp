# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 11:20:30 by mdesoeuv          #+#    #+#              #
#    Updated: 2022/03/04 11:41:54 by mdesoeuv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := c++ 

CFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := megaphone.cpp

OBJS := $(SRCS:.cpp=.o)

OBJS_DIR := objs/

OBJS_FILES := $(addprefix $(OBJS_DIR), $(OBJS))

all : $(NAME)

$(NAME) :	$(OBJS_FILES)
			$(CC) $(CFLAGS) $(OBJS_FILES) -o $(NAME)

objs/%.o :	%.cpp
			mkdir -p $(OBJS_DIR)
			$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -rf $(OBJS_DIR)
		
fclean :	clean 
			rm -f $(NAME)
		
re :	fclean
		$(MAKE) all
	
.PHONY : all clean fclean re
