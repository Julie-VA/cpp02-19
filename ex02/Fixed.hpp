/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:58:44 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/09 15:03:50 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const src);
		Fixed(float const src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int					_value;
		static const int	bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);
bool 			operator>(Fixed const &lhs, Fixed const &rhs);
bool			operator<(Fixed const &lhs, Fixed const &rhs);
bool			operator>=(Fixed const &lhs, Fixed const &rhs);
bool			operator<=(Fixed const &lhs, Fixed const &rhs);
bool			operator==(Fixed const &lhs, Fixed const &rhs);
bool			operator!=(Fixed const &lhs, Fixed const &rhs);
