/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:08 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 22:17:04 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie		*horde;
	int			i;
	std::stringstream out;

	i = 0;
	horde = new Zombie[N];
	std::cout << "HORDE!!!" << std::endl;
	while (i < N)
	{
		out << i + 1;
		horde[i].setName(name + " " + out.str());
		out.str("");
		i++;
	}
	return (horde);
}
