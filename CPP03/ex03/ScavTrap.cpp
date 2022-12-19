/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:30:47 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:19:02 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdarg>
#include <string>

ScavTrap::ScavTrap(void) :
	ClapTrap("ScavTrap"), _ShitPoints(100), _SenergyPoints(50), _SattackDamage(20)
{
	this->_hitPoints = this->_ShitPoints;
	this->_energyPoints = this->_SenergyPoints;
	this->_attackDamage = this->_SattackDamage;
	std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name)
{
	this->_hitPoints = this->_ShitPoints;
	this->_energyPoints = this->_SenergyPoints;
	this->_attackDamage = this->_SattackDamage;
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

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy to attack" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "Scav attack " << target << std::endl;
}
