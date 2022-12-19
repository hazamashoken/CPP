/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:14:46 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:52:48 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	// std::cout << "Default constructor for Cure called" << std::endl;
}

Cure::Cure( Cure const & src ): AMateria("cure")
{
	// std::cout << "Copy constructor for Cure called" << std::endl;
	*this = src;
}

Cure::~Cure( void )
{
	// std::cout << "Destructor for Cure called" << std::endl;
}

Cure	&Cure::operator=( const Cure &other )
{
	this->_type = other._type;
	// std::cout << "Assignation operator for Cure called" << std::endl;
	return (*this);
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds with *" << std::endl;
}
