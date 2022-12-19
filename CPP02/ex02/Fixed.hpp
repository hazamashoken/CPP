/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:44:19 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/10 23:19:25 by tliangso         ###   ########.fr       */
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

		Fixed(int const n);
		Fixed(float const f);
		int		toInt(void) const;
		float	toFloat(void) const;

		Fixed & operator+(Fixed const & rhs);
		Fixed & operator-(Fixed const & rhs);
		Fixed & operator*(Fixed const & rhs);
		Fixed & operator/(Fixed const & rhs);

		bool operator>(Fixed const & rhs);
		bool operator<(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);

	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
