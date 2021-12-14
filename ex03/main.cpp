/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:59:03 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/14 13:26:23 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// 			 a(2,3)
// 			   / \
// 			  /   \
// 			 /	   \
// 			/   p1  \
// 		   /		 \
//	b(0,1) -----p----- c(4,1)
// 				p2

int main(void)
{
	const Point a(0.f, 1.f);
	const Point b(2.f, 3.f);
	const Point c(4.f, 1.f);
	const Point	p(2.f, 1.f);
	const Point p1(2.f, 2.f);
	const Point	p2(2.f, 0.99);

	std::cout << "p is " << (bsp(a, b, c, p) ? "in" : "not in") << " the triangle" << std::endl;
	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "in" : "not in") << " the triangle" << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "in" : "not in") << " the triangle" << std::endl;
	return (0);
}
