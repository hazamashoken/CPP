/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:44:08 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 23:47:29 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << this->_name << " has been created." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name << " has been destroyed." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
