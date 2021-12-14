/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:09:44 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/13 18:09:44 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{
}

Point::Point(float const a, float const b) : _x(Fixed(a)), _y(Fixed(b))
{
}

Point::~Point(void)
{
}

Point	&Point::operator=(Point const &rhs)
{
	(void)rhs;
	std::cout << "Impossible to assign a value to a constant variable" << std::endl;
	return (*this);
}

Fixed const	Point::getX(void) const
{
	return (this->_x);
}

Fixed const	Point::getY(void) const
{
	return (this->_y);
}
