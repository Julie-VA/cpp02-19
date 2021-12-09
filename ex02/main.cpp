/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:59:03 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/09 15:03:59 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	// Fixed a;
	// Fixed const b(Fixed(5.05f) * Fixed(2));

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max(a, b) << std::endl;

	Fixed	a(10.562f);
	Fixed	b(20);

	if (b > a)
		std::cout << "> ok" << std::endl;
	if (a < b)
		std::cout << "< ok" << std::endl;
	a.setRawBits(20 * 256);
	if (a >= b)
		std::cout << ">= ok" << std::endl;
	if (a <= b)
		std::cout << "<= ok" << std::endl;
	if (a == b)
		std::cout << "== ok" << std::endl;
	a.setRawBits(1);
	if (a != b)
		std::cout << "!= ok" << std::endl;

	return 0;
}
