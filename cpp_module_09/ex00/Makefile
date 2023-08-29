# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abderr <abderr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 12:03:04 by asfaihi           #+#    #+#              #
#    Updated: 2023/08/29 22:53:06 by abderr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc 

SRC = main.cpp BitcoinExchange.cpp

OBJECT = $(SRC:%.cpp=%.o)

#FLAGS = -Wall -Wextra -Werror
FLAGS = 

HEADERS = BitcoinExchange.hpp

all: $(NAME)

$(NAME): $(OBJECT)
	clang++ $(OBJECT) -o $(NAME)

%.o:%.cpp $(HEADERS)
	clang++ $(FLAGS) -std=c++98 -c $<

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
