/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:45:05 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:19:56 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <ostream>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & rhs);

		void	whoAmI(void);
		// void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		using	ScavTrap::attack;

	private:
		std::string	_name;
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs);

#endif
