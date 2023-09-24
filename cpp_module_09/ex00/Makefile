# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abderrsfa <abderrsfa@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 12:03:04 by asfaihi           #+#    #+#              #
#    Updated: 2023/09/24 23:45:46 by abderrsfa        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc 

SRC = main.cpp BitcoinExchange.cpp

OBJECT = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror

HEADERS = BitcoinExchange.hpp

all: $(NAME)

$(NAME): $(OBJECT)
	c++ $(OBJECT) -o $(NAME)

%.o:%.cpp $(HEADERS)
	c++ $(FLAGS) -std=c++98 -c $<

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
