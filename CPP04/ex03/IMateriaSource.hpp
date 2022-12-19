/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMeteriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:07:53 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/12 00:08:03 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMETERIASOURCE_HPP
# define IMETERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
