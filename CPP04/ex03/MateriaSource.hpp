/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:15:58 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:35:31 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{

	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource &src );
		~MateriaSource( void );

		MateriaSource	&operator=( const MateriaSource &other );

		virtual void		learnMateria(AMateria *materia_to_learn);
		virtual AMateria	*createMateria(std::string const & type);

		void			printMaterias( void ) const ;

	private:

		const static int	_materias_size = 4;

		AMateria		*_materias[MateriaSource::_materias_size];
		int				_number_learned;

};

#endif
