# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 13:05:38 by asfaihi           #+#    #+#              #
#    Updated: 2021/11/05 12:52:58 by asfaihi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp 

OBJECT = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	clang++ $(OBJECT) -o $(NAME)

%.o:%.cpp
	clang++ $(FLAGS) -std=c++98 -c $<

clean:
	/bin/rm -f $(OBJECT)
	/bin/rm -f *.replace

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all