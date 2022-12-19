/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:41:53 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 23:44:44 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Weapon has been created." << std::endl;
	this->_type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon has been destroyed." << std::endl;
}

std::string const&	Weapon::getType(void)
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}
