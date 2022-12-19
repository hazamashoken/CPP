/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:20:40 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/11 14:20:50 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		virtual ~WrongCat(void);
		WrongCat & operator=(WrongCat const & rhs);

		virtual void	makeSound(void) const;
};

#endif
