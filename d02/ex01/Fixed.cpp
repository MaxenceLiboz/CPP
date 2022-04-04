/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:09:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/01 13:07:55 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fixed_point_fractional_bits = 8;

Fixed::Fixed(void) : _fixed(0) {
	std::cout << GREEN << "Default constructor called" << END << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << GREEN << "Copy constructor called" << END << std::endl;
	*this = src;
}

Fixed::Fixed(float const raw) {
	std::cout << GREEN << "Float constructor called" << END << std::endl;
	this->_fixed = roundf(raw * (1 << this->_fixed_point_fractional_bits));
}

Fixed::Fixed(int const raw) {
	std::cout << GREEN << "Int constructor called" << END << std::endl;
	this->_fixed = roundf(raw * (1 << this->_fixed_point_fractional_bits));
}

Fixed::~Fixed(void) {
	std::cout << RED << "Destructor called" << END << std::endl;
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

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << GREEN << "Assignation operator called" << END << std::endl;
	this->_fixed = src.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {
	o << src.toFloat();
	return o;
}
