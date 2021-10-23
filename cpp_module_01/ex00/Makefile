NAME = Zombie

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

HEADER = Zombie.hpp

OBJECT = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	clang++ $(OBJECT) -o $(NAME)

%.o:%.cpp $(HEADER)
	clang++ $(FLAGS) -c $<

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all