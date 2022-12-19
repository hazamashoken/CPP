/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:46:29 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:19:48 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
	this->_hitPoints = FragTrap::_FhitPoints;
	this->_energyPoints = ScavTrap::_SenergyPoints;
	this->_attackDamage = FragTrap::_FattackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap()
{
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
	this->_hitPoints = FragTrap::_FhitPoints;
	this->_energyPoints = ScavTrap::_SenergyPoints;
	this->_attackDamage = FragTrap::_FattackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), FragTrap(), ScavTrap()
{
	*this = src;
	std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name << " is actually " << this->ClapTrap::_name << std::endl;
}

// void DiamondTrap::attack(const std::string &target)
// {
// 	std::cout << "diamond attack called" << std::endl;
// 	ScavTrap::attack(target);
// }

void DiamondTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs)
{
	o << "DiamondTrap " << rhs.getName() << " has " << rhs.getHitPoints() << " hit points, " << rhs.getEnergyPoints() << " energy points, " << rhs.getAttackDamage() << " attack damage" << std::endl;
	return (o);
}


