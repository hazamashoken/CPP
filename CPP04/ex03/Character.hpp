/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:17:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 15:48:56 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <vector>

class Character : public ICharacter
{
	public:

		Character( const std::string & name );
		Character( Character const & src );
		~Character( void );

		Character	&operator=( const Character &other );

		virtual std::string const	&getName() const ;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

		virtual void		printInventory( void ) const ;

	private:

		Character( void );

		static const int	_inventory_size = 4;

		std::string	_name;
		AMateria	*_inventory[Character::_inventory_size];
		int			_number_equipped;
		std::vector <AMateria*>	_memory;

};

#endif
