/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:46:31 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 16:57:15 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name <<": Braiiiiiiinnnssss..." << std::endl;
}
