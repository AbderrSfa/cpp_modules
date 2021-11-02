/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asfaihi <asfaihi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:16:57 by asfaihi           #+#    #+#             */
/*   Updated: 2021/11/02 10:04:55 by asfaihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main() {
    ClapTrap    Abderr("Abderr");
    ClapTrap    Adam("Adam");
    ScavTrap    yoink("Babooch");

    yoink.attack("Abderr");
    Abderr.takeDamage(10);
    Abderr.beRepaired(5);
    yoink.guardGate();
}