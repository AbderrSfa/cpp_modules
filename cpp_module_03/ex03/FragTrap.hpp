/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:10:59 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/13 22:43:31 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap(std::string aName);
		FragTrap(FragTrap const & src);
		FragTrap &  operator=(FragTrap const & rhs);
		~FragTrap();

		void	attack(std::string const & target) const ;
		void	highFivesGuys( void ) const ;
};

#endif