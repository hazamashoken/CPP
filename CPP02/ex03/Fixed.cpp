/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:44:15 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 00:00:45 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>
#include <cmath>

//std=c++98

Fixed::Fixed(void) : _fixedPointValue(0)
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
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

Fixed::Fixed(int const n)
{
	this->_fixedPointValue = n << Fixed::_fractionalBits;
}

Fixed::Fixed(float const f)
{
	this->_fixedPointValue = (int)roundf(f * (1 << Fixed::_fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed & Fixed::operator+(Fixed const & rhs)
{
	Fixed *tmp = new Fixed(this->toFloat() + rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator-(Fixed const & rhs)
{
	Fixed *tmp = new Fixed(this->toFloat() - rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator*(Fixed const & rhs)
{
	Fixed *tmp = new Fixed(this->toFloat() * rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator/(Fixed const & rhs)
{
	Fixed *tmp = new Fixed(this->toFloat() / rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator+(Fixed const & rhs) const
{
	Fixed *tmp = new Fixed(this->toFloat() + rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator-(Fixed const & rhs) const
{
	Fixed *tmp = new Fixed(this->toFloat() - rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator*(Fixed const & rhs) const
{
	Fixed *tmp = new Fixed(this->toFloat() * rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator/(Fixed const & rhs) const
{
	Fixed *tmp = new Fixed(this->toFloat() / rhs.toFloat());
	return *tmp;
}

Fixed & Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return *this;
}

Fixed & Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return tmp;
}

bool Fixed::operator>(Fixed const & rhs)
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed const & rhs)
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(Fixed const & rhs)
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return this->toFloat() != rhs.toFloat();
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return a < b ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return a > b ? a : b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	return a < b ? a : b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	return a > b ? a : b;
}
