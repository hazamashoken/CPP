/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:30:47 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 13:26:28 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
	ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy to guard gate" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode" << std::endl;
}
