/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spike.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:53:28 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:55:13 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spike.hpp"

Spike::Spike( void ) : AMateria("spike")
{
	// std::cout << "Default constructor for Spike called" << std::endl;
}

Spike::Spike( Spike const & src ) : AMateria("spike")
{
	// std::cout << "Copy constructor for Spike called" << std::endl;
	*this = src;
}

Spike::~Spike( void )
{
	// std::cout << "Destructor for Spike called" << std::endl;
}

Spike	&Spike::operator=( const Spike &other )
{
	this->_type = other._type;
	// std::cout << "Assignation operator for Spike called" << std::endl;
	return (*this);
}

AMateria	*Spike::clone( void ) const
{
	return (new Spike(*this));
}

void		Spike::use(ICharacter& target)
{
	std::cout << "* Cast "<< this->getType() << " at " << target.getName() << " *" << std::endl;
}


