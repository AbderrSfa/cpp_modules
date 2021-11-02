/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:16:59 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 15:33:42 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class   ClapTrap {
	private:
		std::string _Name;
		int         _Hitpoints;
		int         _EnergyPoints;
		int         _AttackDamage;
	
	public:
		ClapTrap(std::string aName);
		ClapTrap(ClapTrap const & src);
		//ClapTrap &  operator=(ClapTrap const & rhs);
		~ClapTrap();

		void		setName(std::string aName);
		void		setHitpoints(int aHitPoints);
		void		setEnergyPoints(int aEnergyPoints);
		void		setAttackDamage(int aAttackDamage);

		std::string	getName( void ) const ;
		int			getHitPoints( void ) const ;
		int			getEnergyPoints( void ) const ;
		int			getAttackDamage( void ) const ;

		void		attack(std::string const & target) const ;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		
};

#endif