/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:46:34 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 16:56:31 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name = "Zombie");
		~Zombie(void);

		void	announce(void);

	private:
		std::string	_name;
		std::string	_type;
};

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

#endif
