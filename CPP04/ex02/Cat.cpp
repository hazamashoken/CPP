/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:56:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:24:18 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(Cat const & src): Animal(src)
{
	*this = src;
	this->_brain = src.getBrain()->clone();
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Assignation Operator called" << std::endl;
	this->_type = rhs._type;
	this->_brain = rhs.getBrain()->clone();
	return (*this);
}

void			Cat::makeSound(void) const
{
	std::cout << "What does the " << this->_type << " say!" << std::endl;
	std::cout << "Meow Meow" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Cat const & rhs)
{
	o << "Cat " << rhs.getType() << " makes a sound" << std::endl;
	return (o);
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}

