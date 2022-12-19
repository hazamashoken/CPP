/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:19:43 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 14:19:58 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(void);
		WrongAnimal & operator=(WrongAnimal const & rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
	protected:
		std::string		_type;
};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & rhs);

#endif
