/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 23:51:19 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 15:47:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include <vector>

class AMateria;

class ICharacter
{
	public:

		virtual ~ICharacter() {}

		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
		virtual void				printInventory( void ) const = 0;

	protected:

		static const int	_inventory_size = 4;

		std::string	_name;
		AMateria	*_inventory[ICharacter::_inventory_size];
		int			_number_equipped;
		std::vector <AMateria*>	_memory;

};

#endif
