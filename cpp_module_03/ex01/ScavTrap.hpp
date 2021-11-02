/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:43:45 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 10:29:49 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
    public:
		ScavTrap(std::string aName);
		ScavTrap(ScavTrap const & src);
		//ScavTrap &  operator=(ScavTrap const & rhs);
		~ScavTrap();

		void	guardGate( void );
};

#endif