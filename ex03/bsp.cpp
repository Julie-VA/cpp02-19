/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:09:39 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/13 18:09:39 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(Point const a, Point const b, Point const c)
{
	return (abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
		+ b.getX().toFloat() *(c.getY().toFloat() - a.getY().toFloat())
		+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abc = area(a, b, c);
	float	pbc = area(point, b, c);
	float	pac = area(point, a, c);
	float	pab = area(point, a, b);

	return (abc == pbc + pac + pab);
}
