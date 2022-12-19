/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:34:24 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 13:29:55 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	ScavTrap1("ScavTrap1");
	ScavTrap	ScavTrap2("ScavTrap2");

	ScavTrap1.attack(ScavTrap2.getName());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());
	std::cout << ScavTrap2.getName() << " has " << ScavTrap2.getHitPoints() << " hit points left." << std::endl;
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());
	std::cout << ScavTrap2.getName() << " has " << ScavTrap2.getHitPoints() << " hit points left." << std::endl;
	ScavTrap2.beRepaired(5);
	ScavTrap1.guardGate();
	return (0);
}
