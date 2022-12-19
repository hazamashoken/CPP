/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 23:21:57 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/17 10:59:41 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY())
{
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::~Point(void)
{
}

Point & Point::operator=(Point & rhs)
{
	return (rhs);
}

Fixed		Point::getX(void) const
{
	return this->_x;
}

Fixed		Point::getY(void) const
{
	return this->_y;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const x = point.getX();
	Fixed const y = point.getY();

	Fixed const	x1 = a.getX();
	Fixed const	y1 = a.getY();

	Fixed const	x2 = b.getX();
	Fixed const	y2 = b.getY();

	Fixed const	x3 = c.getX();
	Fixed const	y3 = c.getY();

	Fixed const	d1 = (x - x3) * (y2 - y3) - (x2 - x3) * (y - y3);
	Fixed const	d2 = (x - x3) * (y3 - y1) - (x3 - x1) * (y - y3);
	Fixed const	d3 = (x - x1) * (y2 - y1) - (x2 - x1) * (y - y1);

	return ((d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0));
}
