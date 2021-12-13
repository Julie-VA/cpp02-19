/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:58:52 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/13 17:52:47 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//Constructors
Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int const src)
{
	this->_value = src << bits;
}

Fixed::Fixed(float const src)
{
	this->_value = int(roundf(src * (1 << bits)));
}

//Destructor
Fixed::~Fixed(void)
{
}

//Stream insertion operator overload
std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

//Assignment operator
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

//Comparison operators
bool	Fixed::operator>(Fixed const &rhs)
{
	return (this->_value > rhs._value);
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return (this->_value != rhs._value);
}

//Arithmetic operators
Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	res;

	res.setRawBits(this->_value + rhs._value);
	return (res);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed	res;

	res.setRawBits(this->_value - rhs._value);
	return (res);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	res;

	res.setRawBits((this->_value * rhs._value) >> bits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed	res;

	res.setRawBits((this->_value / rhs._value) * (1 << bits));
	return (res);
}

//Incrementers/Decrementers
Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	cpy = *this;

	this->_value++;
	return(cpy);
}

Fixed	Fixed::operator--(int)
{
	Fixed	cpy = *this;

	this->_value--;
	return(cpy);
}

//Member functions
int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return float(this->_value) / (1 << bits);
}

int		Fixed::toInt(void) const
{
	return (this->_value >> bits);
}

//Static member functions
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._value < b._value)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a._value > b._value)
		return (a);
	return (b);
}
