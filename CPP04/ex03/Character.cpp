/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:17:59 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:32:28 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ): _name(""), _number_equipped(0)
{
	for (int i = 0; i < Character::_inventory_size; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Default constructor for Character called" << std::endl;
}

Character::Character( const std::string &name ): _name(name)
{
	for (int i = 0; i < Character::_inventory_size; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Name constructor for Character called" << std::endl;
}

Character::Character( Character const & src )
{
	// std::cout << "Copy constructor for Character called" << std::endl;
	for (int i = 0; i < Character::_inventory_size; i++)
		this->_inventory[i] = NULL;
	this->_number_equipped = src._number_equipped;
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = src.getName();
}

Character::~Character( void )
{
	std::cout << "Destructor for "<< this->_name <<" called" << std::endl;
	for (int i = 0; i < Character::_number_equipped; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (long unsigned int i = 0; i < this->_memory.size(); i++)
	{
		if (this->_memory[i])
			delete this->_memory[i];
	}
	std::cout << "Destructor for "<< this->_name <<" called" << std::endl;
}

Character &	Character::operator=( Character const & rhs )
{
	this->_number_equipped = 0;
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i]->clone();
		if (rhs._inventory[i])
			this->_number_equipped++;
	}
	this->_name = rhs.getName();
	// std::cout << "Assignement operator for Character called" << std::endl;
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_number_equipped <= Character::_inventory_size)
	{
		this->_inventory[this->_number_equipped] = m;
		this->_number_equipped++;
		std::cout << "Equipped a " << m->getType() << std::endl;
	}
	else
		std::cout << "Couldn't equip a " << m->getType() << ", no more space"
			<< std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= Character::_inventory_size)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << "No item at index " << idx << std::endl;
		return ;
	}
	std::cout << "Unequipped a " << this->_inventory[idx]->getType() << std::endl;
	this->_memory.push_back(this->_inventory[idx]);
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= Character::_inventory_size)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << "No item at index " << idx << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

void	Character::printInventory( void ) const
{
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i]->getType() << " " << this->_inventory[i] << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}

