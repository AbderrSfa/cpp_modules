/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:55:27 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/13 22:43:41 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_Name;

	public:
		DiamondTrap( void );
		DiamondTrap(std::string aName);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap &  operator=(DiamondTrap const & rhs);
		~DiamondTrap();

		void	attack(std::string const & target) const ;
		void	whoAmI( void ) const ;
};

#endif