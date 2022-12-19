/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:38:08 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:09:20 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):
	ClapTrap("FragTrap"), _FhitPoints(100), _FenergyPoints(100), _FattackDamage(30)
{
	this->_hitPoints = this->_FhitPoints;
	this->_energyPoints = this->_FenergyPoints;
	this->_attackDamage = this->_FattackDamage;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = this->_FhitPoints;
	this->_energyPoints = this->_FenergyPoints;
	this->_attackDamage = this->_FattackDamage;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " has entered High Five mode" << std::endl;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs)
{
	o << "FragTrap " << rhs.getName() << " has " << rhs.getHitPoints() << " hit points, " << rhs.getEnergyPoints() << " energy points, " << rhs.getAttackDamage() << " attack damage" << std::endl;
	return (o);
}
