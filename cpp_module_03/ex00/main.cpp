/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:16:57 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/12 14:35:32 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main() {
    ClapTrap    Warrior("Warrior");
    ClapTrap    lol("Wizard");
    ClapTrap    Wizard(lol);

    Wizard.attack("Warrior");
    Warrior.takeDamage(10);
    Warrior.beRepaired(5);
}