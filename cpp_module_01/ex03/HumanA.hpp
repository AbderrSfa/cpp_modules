#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	_Name;
		Weapon		_Weapon;
	
	public:
		HumanA(std::string aName, Weapon& aWeapon) : _Name(aName), _Weapon(aWeapon) {}
		~HumanA() {}
		
		void	attack( void ) const;
};

#endif