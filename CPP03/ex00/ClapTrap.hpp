/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:03:14 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 13:21:25 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name, unsigned int hp = 10, unsigned int ep = 10, unsigned int ap = 0);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & rhs);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;

	private:
		std::string	_name;

		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
