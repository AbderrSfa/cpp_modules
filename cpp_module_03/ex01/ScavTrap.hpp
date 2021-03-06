/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:45 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:40:30 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
    public:
		ScavTrap( void );
		ScavTrap(std::string aName);
		ScavTrap(ScavTrap const & src);
		ScavTrap &  operator=(ScavTrap const & rhs);
		~ScavTrap();

		void	attack(std::string const & target) const ;
		void	guardGate( void ) const ;
};

#endif