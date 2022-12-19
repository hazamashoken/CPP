/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:41:34 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 15:22:07 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <fstream>
#include <sstream>

Scalar::Scalar(void)
{
}

Scalar::Scalar(char * input) :
	_input(atof(input))
{
}

Scalar::~Scalar(void)
{
}

Scalar::Scalar(Scalar const &src)
{
	*this = src;
}

Scalar &Scalar::operator=(Scalar const &rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
	}
	return (*this);
}

void Scalar::convertToChar()
{
	char	c;

	if (std::isnan(this->_input) == true || std::isinf(this->_input) == true)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	c = static_cast<char>(this->_input);
	if (std::isprint(c) == false)
	{
		std::cout << "char: Non displayable" << std::endl;
		return;
	}
	std::cout << "char: '" << c << '\''<< std::endl;
}

void Scalar::convertToInt()
{
	int i;
	try
	{
		i = static_cast<int>(this->_input);
	}
	catch (std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: " << i << std::endl;
}

void Scalar::convertToFloat()
{
	float f;
	try
	{
		f = static_cast<float>(this->_input);
	}
	catch (std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
		return;
	}
	if (f - static_cast<int>(f) == 0)
	{
		std::cout << "float: " << f << ".0f" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
	}
}

void Scalar::convertToDouble()
{
	double	d;

	d = static_cast<double>(this->_input);
	if (d - static_cast<int>(d) == 0)
	{
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "double: " << d << std::endl;
	}
}
