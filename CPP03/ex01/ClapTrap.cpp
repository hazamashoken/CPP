/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:03:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 13:31:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned ep, unsigned int ap) :
	_name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ap)
{
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to attack" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to repair" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

