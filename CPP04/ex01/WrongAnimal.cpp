/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:20:00 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 14:20:21 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & rhs)
{
	o << "WrongAnimal " << rhs.getType() << " makes a sound" << std::endl;
	return (o);
}
