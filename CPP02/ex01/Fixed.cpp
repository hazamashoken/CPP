/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:44:15 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/10 23:02:05 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>
#include <cmath>

//std=c++98

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

int	Fixed::toInt(void) const
{
	return this->getRawBits();
}

float	Fixed::toFloat(void) const
{

	return this->getRawBits() / (float)(1 << Fixed::_fractionalBits);
}

//ex01

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << Fixed::_fractionalBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf(f * (1 << Fixed::_fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
