/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:56:53 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:24:11 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(Dog const & src): Animal(src)
{
	*this = src;
	this->_brain = src.getBrain()->clone();
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Assignation Operator called" << std::endl;
	this->_type = rhs._type;
	this->_brain = rhs.getBrain()->clone();
	return (*this);
}

void			Dog::makeSound(void) const
{
	std::cout << "What does the " << this->_type << " say!" << std::endl;
	std::cout << "Woof Woof" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Dog const & rhs)
{
	o << "Dog " << rhs.getType() << " makes a sound" << std::endl;
	return (o);
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
