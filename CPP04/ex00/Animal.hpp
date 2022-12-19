/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:54:35 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:02:40 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & rhs);

		std::string		getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string		_type;
};

std::ostream & operator<<(std::ostream & o, Animal const & rhs);

#endif
