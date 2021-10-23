#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	private:
		std::string	_Name;
	
	public:
		Zombie(std::string name);
		~Zombie( void );

		void	announce( void ) const ;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif