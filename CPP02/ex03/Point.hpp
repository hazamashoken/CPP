/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 23:21:54 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/10 23:41:48 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(Point const & src);
		Point(float const x, float const y);
		Point & operator=(Point & rhs);
		~Point(void);

		void	setX(Fixed const x);
		void	setY(Fixed const y);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
