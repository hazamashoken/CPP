/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:04:55 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 01:07:45 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	ClapTrap1("ClapTrap1");
	ClapTrap	ClapTrap2("ClapTrap2");

	ClapTrap1.attack(ClapTrap2.getName());
	ClapTrap2.takeDamage(ClapTrap1.getAttackDamage());
	ClapTrap2.beRepaired(5);
	return (0);
}
