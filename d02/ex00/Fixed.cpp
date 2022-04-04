/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:09:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/01 12:59:14 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_comma = 8;

Fixed::Fixed(void) : _fixed(0) {
	std::cout << GREEN << "Default constructor called" << END << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	std::cout << GREEN << "Copy constructor called" << END << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << RED << "Destructor called" << END << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & src) {
	std::cout << GREEN << "Assignation operator called" << END << std::endl;
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