/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:46:34 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 22:17:25 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	public:
		Zombie(std::string name = "Zombie");
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name = "Zombie");

#endif
