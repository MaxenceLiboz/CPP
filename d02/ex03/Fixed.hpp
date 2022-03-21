/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:04:12 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/21 13:30:51 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const raw);
		Fixed(float const raw);
		~Fixed(void);

		Fixed &	operator=(Fixed const & src);
		bool	operator==(Fixed const & src);
		bool	operator!=(Fixed const & src);
		bool	operator>(Fixed const & src);
		bool	operator>=(Fixed const & src);
		bool	operator<(Fixed const & src);
		bool	operator<=(Fixed const & src);
		Fixed	operator+(Fixed const & src);
		Fixed	operator-(Fixed const & src);
		Fixed	operator*(Fixed const & src);
		Fixed	operator/(Fixed const & src);
		Fixed &	operator++(void);
		Fixed	operator++(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed const &	min(Fixed const & f1, Fixed const & f2);
		static Fixed &	min(Fixed & f1, Fixed & f2);
		static Fixed const &	max(Fixed const & f1, Fixed const & f2);
		static Fixed &	max(Fixed & f1, Fixed & f2);
		
	private:
		int					_fixed;
		static int const	_fixed_point_fractional_bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);


#endif