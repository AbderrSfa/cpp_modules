/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:16:57 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 10:36:09 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int     main() {
    ClapTrap    Babooch("\e[1;32mBabooch\e[0m");
	ScavTrap    Adam("\e[1;32mAdam\e[0m");
	FragTrap    Aya("\e[1;32mAya\e[0m");
	DiamondTrap yoink("\e[1;32mDiamond\e[0m");

	Adam.attack("Babooch");
	Babooch.takeDamage(Adam.getAttackDamage());
	Babooch.beRepaired(Babooch.getEnergyPoints());
	Adam.guardGate();
	Aya.highFivesGuys();
	yoink.whoAmI();
}