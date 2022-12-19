/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:29:54 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:16:25 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(std::string const & target);
		void	guardGate(void);

	protected:
		int	_ShitPoints;
		int	_SenergyPoints;
		int	_SattackDamage;
};

#endif
