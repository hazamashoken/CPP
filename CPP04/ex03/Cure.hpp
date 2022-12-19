/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:14:34 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:13:36 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:

		Cure( void );
		Cure( Cure const &src );
		~Cure( void );

		Cure	&operator=( const Cure &other );

		virtual AMateria	*clone( void ) const ;
		virtual void		use(ICharacter& target);

	private:
};

#endif
