NAME = Violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

OBJECT = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT)
	clang++ $(OBJECT) -o $(NAME)

%.o:%.cpp $(HEADERS)
	clang++ $(FLAGS) -c $<

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all