/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:56:53 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 16:13:14 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(Animal const & src): Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Assignation Operator called" << std::endl;
	this->_type = rhs._type;
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
