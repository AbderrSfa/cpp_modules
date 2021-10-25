/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:05:42 by asfaihi           #+#    #+#             */
/*   Updated: 2021/10/25 13:05:43 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string aType) : _type(aType) {}
		~Weapon() {}

		std::string	getType( void ) const;
		void		setType(std::string aType);
};

#endif