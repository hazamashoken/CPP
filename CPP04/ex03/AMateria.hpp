/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 23:50:49 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:49:30 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETARIA_HPP
# define AMETARIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{


	public:

		AMateria( const std::string &type );
		virtual	~AMateria(){}

		const std::string	&getType( void ) const ;
		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter& target ) = 0;

		void	setType( const std::string &type );

	protected:

		std::string	_type;
};


#endif
