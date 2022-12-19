/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spike.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:53:40 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:54:53 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPIKE_HPP
# define SPIKE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Spike : public AMateria
{
	public:

		Spike( void );
		Spike( Spike const &src );
		~Spike( void );

		Spike	&operator=( const Spike &other );

		virtual AMateria	*clone( void ) const ;
		virtual void		use(ICharacter& target);

	private:
};

#endif
