/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:44:19 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/10 23:01:55 by tliangso         ###   ########.fr       */
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

		//ex01

		Fixed(int const n);
		Fixed(float const f);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

//ex01
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
