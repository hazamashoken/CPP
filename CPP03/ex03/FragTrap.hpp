/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:37:12 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 14:11:21 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);

		void	highFivesGuys(void);
	protected:
		int	_FhitPoints;
		int	_FenergyPoints;
		int	_FattackDamage;
};

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs);

#endif
