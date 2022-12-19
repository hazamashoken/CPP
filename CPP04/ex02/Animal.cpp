/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:54:55 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 14:58:35 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(Animal const & src): Brain()
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Assignation Operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::makeSound(void) const
{
	std::cout << "What does Animal say!" << std::endl;
	std::cout << "I don't know" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Animal const & rhs)
{
	o << "Animal " << rhs.getType() << " makes a sound" << std::endl;
	return (o);
}
