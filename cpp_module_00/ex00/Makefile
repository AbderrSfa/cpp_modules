# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/15 12:08:37 by asfaihi           #+#    #+#              #
#    Updated: 2021/10/15 12:13:11 by asfaihi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJECT = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	clang++ $(OBJECT) -o $(NAME)
%.o:%.cpp
	clang++ $(FLAGS) -c $<

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all