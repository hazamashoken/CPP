/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:08:36 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:51:05 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	// std::cout << "Default constructor for Ice called" << std::endl;
}

Ice::Ice( Ice const & src ): AMateria("ice")
{
	// std::cout << "Copy constructor for Ice called" << std::endl;
	*this = src;
}

Ice::~Ice( void )
{
	// std::cout << "Destructor for Ice called" << std::endl;
}

Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	// std::cout << "Assignation operator for Ice called" << std::endl;
	return (*this);
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an " << this->getType() << " bolt at " << target.getName() << " *" << std::endl;
}
