/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:45:57 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 23:58:07 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "HumanB " << this->_name << " has been created." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " has been destroyed." << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
