/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:09:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/18 13:46:16 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_comma = 8;

Fixed::Fixed(void) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}