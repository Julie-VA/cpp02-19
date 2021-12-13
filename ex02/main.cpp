/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:59:03 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/13 18:00:24 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	
	//My tests
	// Fixed	a(10.562f);
	// Fixed	b(20);

	// if (b > a)
	// 	std::cout << "> ok" << std::endl;
	// if (a < b)
	// 	std::cout << "< ok" << std::endl;
	// a.setRawBits(20 * 256);
	// if (a >= b)
	// 	std::cout << ">= ok" << std::endl;
	// if (a <= b)
	// 	std::cout << "<= ok" << std::endl;
	// if (a == b)
	// 	std::cout << "== ok" << std::endl;
	// a.setRawBits(1);
	// if (a != b)
	// 	std::cout << "!= ok" << std::endl;

	// a.setRawBits(20 * 256);
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// a = a + b;
	// std::cout << "a + b = " << a << std::endl;
	// a = a - b;
	// std::cout << "a - b = " << a << std::endl;
	// a = a * b;
	// std::cout << "a * b = " << a << std::endl;
	// a = a / b;
	// std::cout << "a / b = " << a << std::endl;

	// std::cout << std::endl;
	// std::cout << "++a = " << ++a << std::endl;
	// std::cout << "--a = " << --a << std::endl;
	// std::cout << "a++ = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a-- = " << a-- << std::endl;
	// std::cout << "a = " << a << std::endl;
	return 0;
}
