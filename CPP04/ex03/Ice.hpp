/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:08:24 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/15 17:51:17 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:

		Ice( void );
		Ice( const Ice &src );
		~Ice( void );

		Ice		&operator=( const Ice &other );

		virtual AMateria	*clone( void ) const ;
		virtual void		use(ICharacter& target);

	private:
};

#endif
