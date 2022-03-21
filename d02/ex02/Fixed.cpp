/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:09:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/21 11:09:48 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fixed_point_fractional_bits = 8;

Fixed::Fixed(void) : _fixed(0) {}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed::Fixed(float const raw) {
	this->_fixed = roundf(raw * (1 << this->_fixed_point_fractional_bits));
}

Fixed::Fixed(int const raw) {
	this->_fixed = roundf(raw * (1 << this->_fixed_point_fractional_bits));
}

Fixed::~Fixed(void) {}

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

Fixed & Fixed::min(Fixed & f1, Fixed & f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed const &	Fixed::min(Fixed const & f1, Fixed const & f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed const &	Fixed::max(Fixed const & f1, Fixed const & f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {
	o << src.toFloat();
	return o;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	this->_fixed = src.getRawBits();
	return *this;
}

bool Fixed::operator==(Fixed const & src) {
	if (this->getRawBits() == src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & src) {
	if (this->getRawBits() != src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(Fixed const & src) {
	if (this->getRawBits() > src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & src) {
	if (this->getRawBits() >= src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const & src) {
	if (this->getRawBits() < src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const & src) {
	if (this->getRawBits() <= src.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const & src) {
	Fixed	tmp;
	
	tmp._fixed = this->getRawBits() + src.getRawBits();
	return tmp;
}

Fixed	Fixed::operator-(Fixed const & src) {
	Fixed	tmp;
	
	tmp._fixed = this->getRawBits() - src.getRawBits();
	return tmp;
}

Fixed	Fixed::operator*(Fixed const & src) {
	Fixed	tmp;
	
	tmp._fixed = (this->_fixed * src.getRawBits()) >> this->_fixed_point_fractional_bits;
	return tmp;
}

Fixed	Fixed::operator/(Fixed const & src) {
	Fixed	tmp;

	tmp._fixed = (this->getRawBits() * (1 << this->_fixed_point_fractional_bits) / src.getRawBits());
	return tmp;
}

Fixed & Fixed::operator++(void) {
	this->_fixed++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	this->_fixed++;
	return tmp;
}