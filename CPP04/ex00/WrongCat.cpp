/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:20:54 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 14:40:33 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound" << std::endl;
}

std::ostream & operator<<(std::ostream & o, WrongCat const & rhs)
{
	o << "WrongCat " << rhs.getType() << " makes a sound" << std::endl;
	return (o);
}

