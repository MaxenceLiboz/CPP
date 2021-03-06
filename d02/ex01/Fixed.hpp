/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:04:12 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/01 13:02:11 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const raw);
		Fixed(float const raw);
		~Fixed(void);

		Fixed &	operator=(Fixed const & src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
	private:
		int					_fixed;
		static int const	_fixed_point_fractional_bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);


#endif