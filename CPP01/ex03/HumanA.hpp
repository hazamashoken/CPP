/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:42:42 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 23:43:41 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void);

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
