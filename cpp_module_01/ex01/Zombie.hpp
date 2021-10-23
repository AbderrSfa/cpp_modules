#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
	private:
		std::string	_Name;
	
	public:
		Zombie( void );
		~Zombie( void );

		void	announce( void ) const ;
		void	setName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif