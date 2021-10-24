#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string aType) : _type(aType) {}
		~Weapon() {}

		const std::string&	getType( void ) const;
		void				setType(std::string aType);
};

#endif