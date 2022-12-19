/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:01:15 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 22:17:17 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie*	horde;

	horde = zombieHorde(5);
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;

	return (0);
}
