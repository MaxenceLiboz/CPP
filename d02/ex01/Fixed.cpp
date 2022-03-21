/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:09:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/21 09:12:23 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fixed_point_fractional_bits = 8;

Fixed::Fixed(void) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(float const raw) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(raw * (1 << this->_fixed_point_fractional_bits));
}

Fixed::Fixed(int const raw) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = roundf(raw * (1 << this->_fixed_point_fractional_bits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	return this->_fixed;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)this->_fixed / (float)(1 << this->_fixed_point_fractional_bits));
}

int	Fixed::toInt(void) const{
	return (this->_fixed / (1 << this->_fixed_point_fractional_bits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {
	o << src.toFloat();
	return o;
}
