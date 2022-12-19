/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:44:19 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/10 21:58:26 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

#endif
