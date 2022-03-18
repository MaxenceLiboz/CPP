/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:04:12 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/18 13:46:35 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int					_fixed;
		static int const	_comma;
};

#endif