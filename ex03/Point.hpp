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
		Point(Fixed const &src);
		~Point(void);

		// Point	&operator=(Point const &rhs);

	private:

		Fixed const	_x;
		Fixed const	_y;
}