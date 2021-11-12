/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:16:59 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:26:56 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {
	private:
		std::string _Name;
		int         _HitPoints;
		int         _EnergyPoints;
		int         _AttackDamage;
	
	public:
		ClapTrap( void );
		ClapTrap(std::string aName);
		ClapTrap(ClapTrap const & src);
		ClapTrap &  operator=(ClapTrap const & rhs);
		~ClapTrap();

		void		attack(std::string const & target) const ;
		void		takeDamage(unsigned int amount) const ;
		void		beRepaired(unsigned int amount) const ;
		
};

#endif