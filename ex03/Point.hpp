/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:09:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/13 18:09:47 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class	Point
{
	public:

		Point(void);
		Point(Point const &src);
		Point(float const a, float const b);
		~Point(void);

		Point	&operator=(Point const &rhs);

		Fixed const	getX(void) const;
		Fixed const	getY(void) const;

	private:

		Fixed const	_x;
		Fixed const	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);