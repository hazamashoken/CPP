/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:45:40 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 16:56:41 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*newZombi;

	newZombi = newZombie("Larry");
	newZombi->announce();
	delete newZombi;
	randomChump("Terry");
	return (0);
}
