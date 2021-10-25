/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:02 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:06:03 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	_Name;
		Weapon&		_Weapon;
	
	public:
		HumanA(std::string aName, Weapon& aWeapon) : _Name(aName), _Weapon(aWeapon) {}
		~HumanA() {}
		
		void	attack( void ) const;
};

#endif