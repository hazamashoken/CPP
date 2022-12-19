/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:56:00 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:10:24 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);
		Dog & operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
		Brain*			getBrain(void) const;

	private:
		Brain	*_brain;
};

#endif
