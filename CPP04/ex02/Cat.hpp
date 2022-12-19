/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:55:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:05:42 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat & operator=(Cat const & rhs);

		virtual void	makeSound(void) const;
		Brain*			getBrain(void) const;

	private:
		Brain	*_brain;
};

#endif

