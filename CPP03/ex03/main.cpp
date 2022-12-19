/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:34:24 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:20:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	diamond("Diamond");
	DiamondTrap	diamond2("Diamond2");

	std::cout << diamond.getHitPoints() << std::endl;
	std::cout << diamond.getEnergyPoints() << std::endl;
	std::cout << diamond.getAttackDamage() << std::endl;

	diamond.attack("Diamond2");
	diamond2.takeDamage(30);
	diamond2.beRepaired(10);
	diamond2.attack("Diamond");
	diamond.takeDamage(20);
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	return (0);
}
