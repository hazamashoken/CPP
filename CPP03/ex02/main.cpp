/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:34:24 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 13:32:24 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	FragTrap1("FragTrap1");
	FragTrap	FragTrap2("FragTrap2");

	FragTrap1.attack(FragTrap2.getName());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	std::cout << FragTrap2.getName() << " has " << FragTrap2.getHitPoints() << " hit points left." << std::endl;
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());
	std::cout << FragTrap2.getName() << " has " << FragTrap2.getHitPoints() << " hit points left." << std::endl;
	FragTrap2.beRepaired(5);
	FragTrap1.highFivesGuys();
	return (0);
}
