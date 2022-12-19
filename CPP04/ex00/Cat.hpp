/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:55:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:02:46 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: virtual public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat & operator=(Cat const & rhs);

		virtual void	makeSound(void) const;
};

#endif

