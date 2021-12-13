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

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0));
{
}

Point::Point(Point const &src)
{
	*this = src;
}

// Point::Point(Fixed )

Point::~Point(void)
{
}

// Point	&operator=(Point const &rhs)
// {

// }
