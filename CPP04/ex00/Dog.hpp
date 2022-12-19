/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:56:00 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:02:50 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal
{
	public:
		Dog(void);
		Dog(Animal const & src);
		virtual ~Dog(void);
		Dog & operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
};

#endif
