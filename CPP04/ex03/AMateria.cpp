/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:03:06 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:49:56 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <cstdarg>

AMateria::AMateria( const std::string &type ): _type(type)
{
	// std::cout << "String constructor for AMateria called" << std::endl;
}

const std::string	&AMateria::getType( void ) const
{
	return this->_type;
}

void	AMateria::setType(const std::string &type)
{
	this->_type = type;
}
