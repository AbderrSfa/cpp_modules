/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:16:57 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:39:53 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main() {
    ClapTrap    Warrior("Warrior");
    ScavTrap    Wizard("Wizard");

    Wizard.attack("Warrior");
    Warrior.takeDamage(10);
    Warrior.beRepaired(5);
}