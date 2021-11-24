#include <vector>
#include <iostream>

template< typename T >
int		easyfind(T & container, int x) {
	for (size_t i = 0; i < container.size(); i++)
	{
		if (container[i] == x) {
			std::cout << container[0] << "***" << std::endl;
			return (container[0]);
		}
	}
	return (-1);
}

int		main() {
	std::vector<int>	v = {10, 1, 2, 4};

	easyfind(v, 2);
}