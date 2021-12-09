/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:33:49 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/09 11:57:27 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_value;
		static const int	_bits;
};
