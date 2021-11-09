/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:06:02 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/09 09:54:33 by asfaihi          ###   ########.fr       */
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
		HumanA(std::string aName, Weapon& aWeapon);
		~HumanA();

		std::string	getName( void ) const ;
		void		setName(std::string aName);

		void	attack( void ) const;
};

#endif